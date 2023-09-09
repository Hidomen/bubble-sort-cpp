#include <iostream>

using namespace std;

void sortMechanism(int sort[], int size){
int temp;

// sorting array
for ( int i = 0; i < size - 1; i++){
for ( int j = 0; j < size - i - 1; j++){
    if ( sort[j] > sort[j+1] ){
        temp = sort[j];
        sort[j] = sort[j+1];
        sort[j+1] = temp;
        }
    }
}

// shows sorted ver.
cout << endl;
for ( int k = 0; k < size; k++){
    cout << sort[k] << " ";
    }

}

int main(){
    // size of numbers
    int amount;

    do { // loop bigger than 1
    cout << "------------------------------" << endl;
    cout << "How many numbers do you sort?:" << endl;
    cin >> amount;
    if ( amount <= 1 ){
        cout << "Invalid respond amount of numbers must be bigger than 1!" << endl;
        }
    } while (amount <= 1);

    int numbers[amount] = {};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    // typing numbers
    for (int i = 0; i < size; i++){
        cout << "Enter Number #" << i + 1 << " :" << endl;
        cin >> numbers[i];
        }

    // show unsorted-numbers
    for (int show : numbers){
        cout << show << " ";
        }
    sortMechanism(numbers, size);

    return 0;
}
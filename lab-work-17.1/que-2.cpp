#include <iostream>
using namespace std;


int* createArray(int size) {
    int* arr = new int[size]; 
    return arr;
}


void insertValues(int* arr, int size) {
    cout << "Enter " << size << " values for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void displayArray(const int* arr, int size) {
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    int* myArray = createArray(size);

    insertValues(myArray, size);

    displayArray(myArray, size);

    delete[] myArray;

    return 0;
}

// this is lab-work 17.1

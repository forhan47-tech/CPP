#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int *arr = new int[size];  // Allocate dynamic array

    for (int i = 0; i < size; i++) {
        arr[i] = i * 10; 
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // Free allocated memory
    return 0;
}


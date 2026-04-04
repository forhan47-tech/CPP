#include <iostream>
using namespace std;

void printArray(int arr[], int size) { 
    for (int i = 0; i < size; i++) {   // arr is actually a pointer
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;   // modifies
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);  
    modifyArray(arr, 5);   // pass address of first element
    printArray(arr, 5);
}

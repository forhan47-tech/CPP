#include <iostream>
using namespace std;

void display(int arr[], int size) { // arr is actually a pointer
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void modify(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // modifies original array
    }
}

int main() {
    int vec[5] = {1, 2, 3, 4, 5};
    display(vec, 5);  
    modify(vec, 5); // pass address of first element
    display(vec, 5);
}

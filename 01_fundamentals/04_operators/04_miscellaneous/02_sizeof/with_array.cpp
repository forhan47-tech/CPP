#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Total size of array: " << sizeof(arr) << endl;
    cout << "Size of one element: " << sizeof(arr[0]) << endl;
    cout << "Number of elements: " << sizeof(arr) / sizeof(arr[0]) << endl;

    return 0;
}

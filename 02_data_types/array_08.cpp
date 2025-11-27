#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cout << *ptr << " ";  // dereference pointer
    }
    cout << endl;

    return 0;
}

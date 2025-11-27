#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array in reverse order:" << endl;
    for (int* ptr = arr + n - 1; ptr >= arr; ptr--) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}

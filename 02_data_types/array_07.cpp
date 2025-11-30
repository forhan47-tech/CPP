#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // arr decays to &arr[0]

    // Modify first element
    ptr[0] = 15;
    cout << ptr[0] << endl;

    // Pointer arithmetic demonstration
    for (int i = 0; i < 3; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    return 0;
}

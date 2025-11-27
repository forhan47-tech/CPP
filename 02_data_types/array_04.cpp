#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}

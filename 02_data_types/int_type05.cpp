#include <iostream>
using namespace std;

int main() {
    int arr[10];
    size_t n = sizeof(arr) / sizeof(arr[0]); // number of elements
    cout << "Array size = " << n << endl;
    return 0;
}

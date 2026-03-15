#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = &arr[2]; // points to last element

    cout << *ptr << endl;   // 30
    ptr--;                  // move back
    cout << *ptr << endl;   // 20
}

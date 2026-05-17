#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = &arr[1]; // points to 20
    int* q = &arr[4]; // points to 50

    cout << "Distance: " << (q - p) << endl; // 3 elements apart
}

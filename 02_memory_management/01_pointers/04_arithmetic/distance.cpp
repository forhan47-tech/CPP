#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p1 = &arr[1]; // points to 20
    int* p2 = &arr[4]; // points to 50

    cout << "Distance: " << (p2 - p1) << endl; // 3 elements apart
}

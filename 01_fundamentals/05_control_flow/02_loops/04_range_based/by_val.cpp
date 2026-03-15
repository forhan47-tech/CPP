#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    cout << "Before: ";
    for (int el : arr) { 
        el += 5;   // modifies only the copy
        cout << el << " ";
    }
    cout << endl;

    cout << "After: ";
    for (int el : arr) {
        cout << el << " ";
    }
    return 0;
}

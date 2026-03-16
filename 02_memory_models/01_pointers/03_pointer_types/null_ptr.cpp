#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // safe initialization

    if (ptr != nullptr) {
        cout << *ptr << endl; // won't run
    } else {
        cout << "Pointer not assigned!" << endl;
    }
}

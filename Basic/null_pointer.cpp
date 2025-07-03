#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr; // C++11 safe null pointer
    if (ptr == nullptr) {
        cout << "Pointer is nullptr.\n";
    }
    return 0;
}

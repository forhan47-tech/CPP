#include <iostream>
using namespace std;

int main() {
    int x = 10;
    void* ptr = &x; // generic pointer

    cout << "Value of x = " << *(int*)ptr << endl; // cast back to int
    return 0;
}

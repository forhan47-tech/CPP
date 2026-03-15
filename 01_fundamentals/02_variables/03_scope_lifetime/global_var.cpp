#include <iostream>
using namespace std;

int global = 100; // accessible everywhere

void demo() {
    cout << "Global variable: " << global << endl;
}

int main() {
    cout << "Accessing global in main: " << global << endl;
    demo();
    return 0;
}

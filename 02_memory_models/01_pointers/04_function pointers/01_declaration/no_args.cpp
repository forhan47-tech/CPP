#include <iostream>
using namespace std;

void hello() {
    cout << "Hello, world!" << endl;
}

int main() {
    void (*fp)() = hello; // function pointer
    fp(); // calls hello
    return 0;
}

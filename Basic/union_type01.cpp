#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 42;
    cout << "Integer: " << d.i << endl;

    d.f = 3.14;
    cout << "Float: " << d.f << endl;

    d.c = 'A';
    cout << "Char: " << d.c << endl;  // Now d.i and d.f are overwritten — only d.c is valid
    return 0;
}

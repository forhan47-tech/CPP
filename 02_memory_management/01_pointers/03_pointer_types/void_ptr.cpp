#include <iostream>
using namespace std;

int main() {
    int x = 10;
    char c = 'A';
    float f = 3.14;

    void* vp; // generic pointer

    vp = &x;
    cout << "Integer: " << *(int*)vp << endl;

    vp = &c;
    cout << "Char: " << *(char*)vp << endl;

    vp = &f;
    cout << "Float: " << *(float*)vp << endl;
}

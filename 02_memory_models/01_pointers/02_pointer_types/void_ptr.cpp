#include <iostream>
using namespace std;

int main() {
    int x = 10;
    char c = 'A';
    float f = 3.14;

    void* vp = &x; // generic pointer
    cout << "int_val: " << *static_cast<int*>(vp) << endl;

    vp = &c;
    cout << "char_val: " << *static_cast<char*>(vp) << endl;

    vp = &f;
    cout << "float_val: " << *static_cast<float*>(vp) << endl;
}

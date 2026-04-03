#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("123 456");
    int a, b;
    ss >> a >> b;
    cout << "First read: " << a << ", " << b << endl;

    ss.clear();          // reset state flags
    ss.str("789 101");   // set new buffer
    ss >> a >> b;
    cout << "Second read: " << a << ", " << b << endl;
    return 0;
}

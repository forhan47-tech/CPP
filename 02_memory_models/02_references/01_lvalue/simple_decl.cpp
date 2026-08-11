#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int& ref = x; // must be initialized
    cout << "Address <-> " << &ref << endl;
    cout << "Value <-> " << ref << endl;
}
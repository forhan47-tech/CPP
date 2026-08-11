#include <iostream>
using namespace std;

int main() {
    int&& r = 10;   // reference to object
    cout << "Address <-> " << &r << endl;
    cout << "Value <-> " << r << endl;
}
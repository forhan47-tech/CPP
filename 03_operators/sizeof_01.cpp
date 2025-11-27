#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int x = 10;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of variable x: " << sizeof(x) << " bytes" << endl;
    return 0;
}

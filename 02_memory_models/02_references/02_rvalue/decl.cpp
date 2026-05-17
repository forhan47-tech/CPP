#include <iostream>
using namespace std;

int main() {
    int&& ref = 10;   // rvalue reference to temporary

    cout << "ref = " << ref << endl; 

    ref = 25;   // modifies the temporary
    cout << "ref (after modification) = " << ref << endl;
    return 0;
}

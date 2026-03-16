#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;   // declaration only
    
    *ptr = 42;            // assign value
    cout << "Value = " << *ptr << endl;

    delete ptr;           // free memory
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // allocate memory
    
    *ptr = 42; // assign value
    cout << "Value = " << *ptr << endl;
    delete ptr; // free memory
}

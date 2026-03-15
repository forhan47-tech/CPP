#include <iostream>
using namespace std;

int main() {
    int x = 10;    
    int* ptr = &x;   
    int** dptr = &ptr;   // point to ptr

    cout << "Address of ptr: " << dptr << endl;
    cout << "Address of x: " << *dptr << endl;
    cout << "Value of x: " << **dptr << endl;
}

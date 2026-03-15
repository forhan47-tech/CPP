#include <iostream>
using namespace std;

int main() {
    int x = 20;    
    int& ref = x;  

    cout << "ref = " << ref << endl; 
    ref = 50;    // modifies x
    cout << "x = " << x << endl; 
}

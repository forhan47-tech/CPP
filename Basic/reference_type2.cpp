#include <iostream>
using namespace std;

int main() {
    int a = 10;
    const int& ref = a;

    cout << "Value: " << ref << endl;

    // ref = 20; // ❌ ERROR! Cannot modify through const reference
    
    a = 20;   // ✅ Allowed! Modifying original variable
    cout << "Modified a: " << a << endl; // Outputs: 20

    return 0;
}


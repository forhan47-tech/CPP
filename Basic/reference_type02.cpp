#include <iostream>
using namespace std;

int main() {
    int a = 10;
    const int& ref = a;

    cout << "Value: " << ref << endl;

    // ref = 20; Cannot modify
    
    a = 20;   // Allowed!
    cout << "Modified a: " << a << endl; 
    return 0;
}

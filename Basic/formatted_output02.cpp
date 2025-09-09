#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Example: setw with default alignment (right)
    cout << setw(10) << 42 << endl; 

    // Example: setw with left alignment
    cout << left << setw(10) << 42 << endl; 

    // Example: fixed-point notation
    cout << fixed << setprecision(2) << 3.14159 << endl; 

    // Example: scientific notation with setprecision
    cout << scientific << setprecision(4) << 3.14159 << endl;

    // Example: default precision
    cout << defaultfloat << 3.14159 << endl; 

    // Example: showpoint
    cout << showpoint << 3 << endl; 
    
    // Example: setw with setfill
    cout << setfill('*') << setw(10) << 42 << endl; 

    // Example: quoted
    cout << quoted("Hello, World!") << endl; 

}


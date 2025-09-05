#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // Example: setw with default alignment (right)
    cout << setw(10) << 42 << endl; // Outputs: "        42"

    // Example: setw with left alignment
    cout << left << setw(10) << 42 << endl; // Outputs: "42        "

    // Example: fixed-point notation
    cout << fixed << setprecision(2) << 3.14159 << endl; // Outputs: "3.14"

    // Example: scientific notation with setprecision
    cout << scientific << setprecision(4) << 3.14159 << endl; // Outputs: "3.1416e+00"

    // Example: default precision
    cout << defaultfloat << 3.14159 << endl; // Outputs: "3.14159"

    // Example: showpoint
    cout << showpoint << 3 << endl; // Outputs: "3.00000"
    
    // Example: setw with setfill
    cout << setfill('*') << setw(10) << 42 << endl; // Outputs: "********42"

    // Example: quoted
    cout << quoted("Hello, World!") << endl; // Outputs: "\"Hello, World!\""

}


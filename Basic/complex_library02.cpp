#include <iostream>
#include <complex>
using namespace std;

int main() {
    complex<double> c(3.0, 4.0); // complex form

    cout << "Sum: " << (c + conj(c)) << endl;
    cout << "Difference: " << (c - conj(c)) << endl;
    
    cout << "Product: " << (c * conj(c)) << endl;
    cout << "Division: " << (c / conj(c)) << endl;

    return 0;
}

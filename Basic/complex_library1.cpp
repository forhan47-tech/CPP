#include <iostream>
#include <complex>

using namespace std;

int main() {
    complex<double> c(3.0, 4.0);

    cout << "Real: " << real(c) << ", Imaginary: " << imag(c) << endl;
    cout << "Magnitude: " << abs(c) << ", Angle: " << arg(c) << endl;

    cout << "Conjugate: " << conj(c) << endl;
    cout << "Polar Form: " << polar(abs(c), arg(c)) << endl;
    cout << "Normalized: " << norm(c) << endl;

    cout << "Sum: " << (c + conj(c)) << endl;
    cout << "Difference: " << (c - conj(c)) << endl;
    cout << "Product: " << (c * conj(c)) << endl;
    cout << "Division: " << (c / conj(c)) << endl;

    return 0;
}

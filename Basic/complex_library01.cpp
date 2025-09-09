#include <iostream>
#include <complex>
using namespace std;

int main() {
    complex<double> c(3.0, 4.0); // complex form

    cout << "Real: " << real(c) << ", Imaginary: " << imag(c) << endl;
    cout << "Magnitude: " << abs(c) << ", Angle: " << arg(c) << endl;

    cout << "Conjugate: " << conj(c) << endl;
    cout << "Polar Form: " << polar(abs(c), arg(c)) << endl;
    cout << "Normalized: " << norm(c) << endl;

    return 0;
}

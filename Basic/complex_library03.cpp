#include <iostream>
#include <complex>
#include <cmath>  
using namespace std;

int main() {
    complex<double> polarForm = polar(5.0, M_PI / 4); // Polar form

    cout << "Polar Coordinates:" << endl;
    cout << "Magnitude = " << abs(polarForm) << endl;
    cout << "Angle (radians) = " << arg(polarForm) << endl;

    cout << "Rectangular Form:" << endl;
    cout << "Real Part = " << real(polarForm) << endl;
    cout << "Imaginary Part = " << imag(polarForm) << endl;

    return 0;
}



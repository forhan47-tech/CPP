#include <iostream>
#include <complex>
#include <cmath>  // For M_PI

using namespace std;

int main() {
    // Convert from polar to rectangular form
    complex<double> polarForm = polar(5.0, M_PI / 4); // Magnitude = 5, Angle = π/4

    cout << "Polar Form: Magnitude = " << abs(polarForm) << ", Angle = " << arg(polarForm) << endl;
    cout << "Real Part: " << real(polarForm) << ", Imaginary Part: " << imag(polarForm) << endl;

    return 0;
}



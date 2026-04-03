#include <iostream>
using namespace std;

struct Complex {
    double real, imag;
};

Complex addComplex(Complex a, Complex b) {
    return {a.real + b.real, a.imag + b.imag}; // temporary object
}

int main() {
    Complex c1{2.0, 3.0}, c2{1.5, 2.5};
    Complex result = addComplex(c1, c2);
    cout << result.real << " + " << result.imag << "i" << endl; 
}

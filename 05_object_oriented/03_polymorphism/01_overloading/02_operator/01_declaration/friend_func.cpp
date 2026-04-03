#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0): real(r), imag(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2); // friend declaration

    void display() { cout << real << " + " << imag << "i" << endl; }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag); // friend function definition
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;   // operator+ is called
    c3.display();         
}

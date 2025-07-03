#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}

    void add() { cout << "Sum: " << a + b << endl; }
    void multiply() { cout << "Product: " << a * b << endl; }
};

int main() {
    Calculator<int> c1(10, 5);
    Calculator<float> c2(2.5, 4.2);

    c1.add();       // Output: 15
    c1.multiply();  // Output: 50

    c2.add();       // Output: 6.7
    c2.multiply();  // Output: 10.5

    return 0;
}

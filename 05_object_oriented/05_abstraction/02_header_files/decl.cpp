#include <iostream>
using namespace std;

class Calculator {   // Declaration (interface)
public:
    int add(int a, int b);
    int multiply(int a, int b);
};

int Calculator::add(int a, int b) {   // Implementation (hidden details)
    return a + b;
}
int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator calc;
    cout << "Sum: " << calc.add(5, 3) << endl;
    cout << "Product: " << calc.multiply(5, 3) << endl;
    return 0;
}

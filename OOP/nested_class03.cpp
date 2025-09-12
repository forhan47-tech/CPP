#include <iostream>
using namespace std;

class Calculator {
public:
    class Operation {
    public:
        static int add(int a, int b) {
            return a + b;
        }

        static int multiply(int a, int b) {
            return a * b;
        }
    };
};

int main() {
    cout << "Sum: " << Calculator::Operation::add(5, 3) << endl;
    cout << "Product: " << Calculator::Operation::multiply(4, 2) << endl;
    return 0;
}

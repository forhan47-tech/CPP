#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    int divide(int a, int b) {
        if (b == 0)
            throw invalid_argument("Cannot divide by zero");
        return a / b;
    }
};

int main() {
    Calculator calc;

    try {
        int result = calc.divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
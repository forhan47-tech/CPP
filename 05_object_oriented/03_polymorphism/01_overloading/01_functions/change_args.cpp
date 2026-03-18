#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Sum (2 int): " << calc.add(2, 3) << endl;
    cout << "Sum (3 ints): " << calc.add(1, 2, 3) << endl;
    return 0;
}

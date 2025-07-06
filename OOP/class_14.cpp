#include <iostream>
using namespace std;

class Math {
public:
    // Overloaded method for adding two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded method for adding two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math calc;

    cout << "Integer Addition: " << calc.add(5, 3) << endl;
    cout << "Double Addition: " << calc.add(5.5, 3.2) << endl;

    return 0;
}

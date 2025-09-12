#include <iostream>
using namespace std;

class Calculator {
public:
    int operator()(int a, int b) const {
        return a * a + b * b;
    }
};

int main() {
    Calculator calc;
    cout << "Hypotenuse :" << calc(3, 4) << endl;  
}

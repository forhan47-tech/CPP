#include <iostream>
using namespace std;

class Calculator {
public:
    int operator()(int a, int b) {
        return a + b;   
    }

    double operator()(double a, double b) {
        return a + b; 
    }
};

int main() {
    Calculator calc;
    cout << calc(3, 4) << endl;    
    cout << calc(2.5, 3.5) << endl; 
}

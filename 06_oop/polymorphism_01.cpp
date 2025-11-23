#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math calc;
    
    cout << calc.add(2, 3) << endl;      
    cout << calc.add(2, 3, 4) << endl;   
    cout << calc.add(2.5, 3.7) << endl;   
    return 0;
}

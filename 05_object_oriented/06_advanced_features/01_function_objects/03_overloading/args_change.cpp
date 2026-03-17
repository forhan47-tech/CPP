#include <iostream>
using namespace std;

class Calculator {
public:
    int operator()(int a, int b) {
        return a + b;   
    }

    int operator()(int a, int b, int c) {
        return a + b + c; 
    }
};

int main() {
    Calculator calc;
    cout << calc(3, 4) << endl;    
    cout << calc(2, 3, 4) << endl; 
}

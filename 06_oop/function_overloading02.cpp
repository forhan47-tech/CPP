#include <iostream>
using namespace std;

class Math {
public:
    void add(int a, int b) { 
        cout << "Sum: " << a + b << endl; 
    }
    void add(double a, double b) { 
        cout << "Sum: " << a + b << endl; 
    }
};

int main() {
    Math calc;
    
    calc.add(5, 3);        
    calc.add(2.5, 4.5);   
    return 0;
}


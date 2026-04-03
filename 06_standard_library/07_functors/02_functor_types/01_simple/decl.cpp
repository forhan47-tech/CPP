#include <iostream>
using namespace std;

class Multiply {
public:
    int operator()(int a, int b) {  
        return a * b;
    }
};

int main() {
    Multiply mul;
    cout << mul(4, 5) << endl; 
}

#include <iostream>
using namespace std;

class Calculate {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculate calc;
    cout << calc(10, 20) << endl; 
}

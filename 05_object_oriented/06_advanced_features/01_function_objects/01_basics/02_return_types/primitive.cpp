#include <iostream>
using namespace std;

class Adder {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    Adder add;
    cout << add(10, 20) << endl; 
}

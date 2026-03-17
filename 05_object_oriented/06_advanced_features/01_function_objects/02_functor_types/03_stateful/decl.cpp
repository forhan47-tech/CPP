#include <iostream>
using namespace std;

class Adder {
    int base;   // state stored inside the functor
public:
    Adder(int b): base(b) {}

    int operator()(int x) {
        return base + x;
    }
};

int main() {
    Adder add(5);         
    cout << add(10) << endl; 
    cout << add(20) << endl; 
}

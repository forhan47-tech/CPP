#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v=0): value(v) {}

    Number operator%(const Number& n) {
        return Number(value % n.value);
    }

    void display() { 
        cout << value << endl; 
    }
};

int main() {
    Number n1(17), n2(5);
    Number n3 = n1 % n2;
    n3.display(); 
}

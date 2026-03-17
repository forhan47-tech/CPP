#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v=0): value(v) {}

    Number operator-() {   // unary minus
        return Number(-value);
    }

    void display() { cout << value << endl; }
};

int main() {
    Number n(10);
    Number neg = -n;   // uses overloaded unary -
    neg.display();     
}

#include <iostream>
using namespace std;

class Number {
    int val;
public:
    Number(int v=0) : val(v) {}

    Number operator/(const Number &n) {
        return Number(val / n.val);
    }

    void display() { 
        cout << val << endl; 
    }
};

int main() {
    Number n1(20), n2(4);
    Number n3 = n1 / n2;   // Calls overloaded /
    n3.display();       
}

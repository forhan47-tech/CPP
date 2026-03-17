#include <iostream>
using namespace std;

class Flags {
    unsigned int value;
public:
    Flags(unsigned int v=0): value(v) {}

    Flags operator~() {
        return Flags(~value);
    }

    void display() { cout << value << endl; }
};

int main() {
    Flags f(5); 
    Flags f2 = ~f;
    f2.display();
}

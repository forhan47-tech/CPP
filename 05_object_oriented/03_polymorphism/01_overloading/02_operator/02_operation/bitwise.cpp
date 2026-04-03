#include <iostream>
using namespace std;

class Flags {
    unsigned int value;
public:
    Flags(unsigned int v=0): value(v) {}

    Flags operator&(const Flags& f) {
        return Flags(value & f.value);
    }

    void display() { 
        cout << value << endl; 
    }
};

int main() {
    Flags f1(6), f2(3);  
    Flags f3 = f1 & f2;  
    f3.display();        
}

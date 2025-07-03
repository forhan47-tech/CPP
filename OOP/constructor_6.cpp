#include <iostream>
using namespace std;

class Box {
    int length;
public:
    // Default constructor
    Box() { 
        length = 0; 
    }

    // Parameterized constructor
    Box(int l) { 
        length = l; 
    }

    void show() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b1, b2(10); // b1 uses default constructor, b2 uses parameterized constructor
          
    cout << "Box 1: ";
    b1.show();

    cout << "Box 2: ";
    b2.show();

    return 0;
}

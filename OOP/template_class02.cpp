#include <iostream>
using namespace std;

// Generic template
template <typename T>
class Box {
public:
    void show() {
        cout << "Generic Box of type T" << endl;
    }
};

// Full specialization for bool
template <>
class Box<bool> {
public:
    void show() {
        cout << "Specialized Box for boolean!" << endl;
    }
};

int main() {
    Box<int> b1;
    b1.show(); 

    Box<bool> b2;
    b2.show(); 
    return 0;
}

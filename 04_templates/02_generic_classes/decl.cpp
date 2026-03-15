#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() { 
        return value; 
    }
};

int main() {
    Box<int> b1(123);
    Box<string> b2("Hello");

    cout << b1.get() << endl; 
    cout << b2.get() << endl; 
}

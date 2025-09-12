#include <iostream>
using namespace std;

// Outer class
class Outer {
public:
    // Inner class
    class Inner {
    public:
        void hello() {
            cout << "Hello from Inner\n";
        }
    };
};

int main() {
    Outer::Inner obj;  // Creating object
    obj.hello();
    return 0;
}

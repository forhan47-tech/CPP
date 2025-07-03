#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor: Object Created!" << endl;
    }

    ~Demo() {
        cout << "Destructor: Object Destroyed!" << endl;
    }
};

int main() {
    Demo* obj = new Demo();  // Dynamically allocate memory
    delete obj;              // Properly delete and call destructor
    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() { 
        cout << "Constructor called\n"; 
    }

    ~MyClass() { 
        cout << "Destructor called\n"; 
    }
};

int main() {
    MyClass* obj = new MyClass; // constructor runs
    delete obj;                 // destructor runs
    return 0;
}

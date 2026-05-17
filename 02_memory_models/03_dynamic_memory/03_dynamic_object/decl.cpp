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
    MyClass* obj = new MyClass; // dynamic allocation
    delete obj; // free memory        
    return 0;
}

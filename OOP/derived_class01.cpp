#include <iostream>
using namespace std;

class Base {
public:
    void greet() { 
        cout << "Hello from Base!" << endl; 
    }
};

class Derived : public Base { // 👈 public inheritance
public:
    void wave() { 
        cout << "Hi from Derived!" << endl; 
    }
};

int main() {
    Derived d;
    
    d.greet();  // Inherited method
    d.wave(); 
    return 0;
}

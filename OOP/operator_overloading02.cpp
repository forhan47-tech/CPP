#include <iostream>
using namespace std;

class Example {
public:
    int value;
    Example(int v) : value(v) {}
    
    // Overloading ==
    bool operator==(const Example& obj) {
        return this->value == obj.value;
    }
    
    // Overloading !=
    bool operator!=(const Example& obj) {
        return this->value != obj.value;
    }
};
    
int main() {
    Example obj1(10), obj2(10), obj3(20);
    
    cout << (obj1 == obj2 ? "Equal" : "Not Equal") << endl;
    cout << (obj1 != obj3 ? "Not Equal" : "Equal") << endl;   
    return 0;
}
    

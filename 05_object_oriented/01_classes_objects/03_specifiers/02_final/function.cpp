#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() final {   // Cannot be overridden
        cout << "Base display" << endl;
    }
};

int main() {
    Base obj;
    obj.display();
}
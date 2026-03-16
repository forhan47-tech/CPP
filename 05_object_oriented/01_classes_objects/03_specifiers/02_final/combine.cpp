#include <iostream>
using namespace std;

class Parent {
public:
    virtual void greet() {
        cout << "Hello from Parent" << endl;
    }

    virtual void farewell() final {  // Cannot be overridden
        cout << "Goodbye from Parent" << endl;
    }
};

class Child final : public Parent {  // Cannot be inherited further
public:
    void greet() override {
        cout << "Hello from Child" << endl;
    }
};

int main() {
    Child c;
    c.greet();
    c.farewell();
    return 0;
}

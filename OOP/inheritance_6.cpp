#include <iostream>
using namespace std;

// Base class
class A {
public:
    void greet() {
        cout << "Hello from A\n";
    }
};

// Virtual inheritance to prevent ambiguity
class B : virtual public A {};
class C : virtual public A {};

// Now D inherits from B and C safely
class D : public B, public C {};

int main() {
    D obj;
    obj.greet();  // ✅ No ambiguity—only one instance of A is inherited

    return 0;
}

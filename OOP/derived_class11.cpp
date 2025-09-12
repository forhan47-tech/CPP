#include <iostream>
using namespace std;

class Base {
protected:
    int Var1;
    int Var2;
public:
    Base(int v1, int v2) : Var1(v1), Var2(v2) {}
};

class Derived : private Base { // 👈 private inheritance
public:
    Derived(int v1, int v2) : Base(v1, v2) {}

    void show() const {
        cout << "Var1: " << Var1 << ", Var2: " << Var2 << endl;
    }
};

int main() {
    Derived d(5, 7);
    
    d.show(); // ✅ still works
    // cout << d.Var1; ❌ Error: Var1 is private in Derived
    return 0;
}

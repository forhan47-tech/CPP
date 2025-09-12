#include <iostream>
using namespace std;

class Base {
public:
    int Var1;
    int Var2;

    Base(int v1, int v2) : Var1(v1), Var2(v2) {}
};

class Derived : protected Base { // 👈 protected inheritance
public:
    Derived(int v1, int v2) : Base(v1, v2) {}

    void show() const {
        cout << "Var1: " << Var1 << ", Var2: " << Var2 << endl;
    }
};

int main() {
    Derived d(5, 7);
    
    d.show();        // ✅ works fine
    // cout << d.Var1; ❌ Error: Var1 is protected in Derived
    return 0;
}

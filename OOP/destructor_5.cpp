#include <iostream>
using namespace std;

class ManualPtr {
    int* ptr;

public:
    ManualPtr(int val) { 
        ptr = new int(val); 
        cout << "Resource acquired\n"; 
    }

    void show() { cout << "Value: " << *ptr << endl; }

    ~ManualPtr() {
        delete ptr;
        cout << "Resource released\n";
    }
};

int main() {
    ManualPtr m(42);
    m.show();
    return 0;
}

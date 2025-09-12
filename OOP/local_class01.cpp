#include <iostream>
using namespace std;

void func() {  // Local class defined inside the function
    class Local {
    public:
        void msg() {
            cout << "Local class\n";
        }
    };

    Local l; // ✅ Valid: Local is visible inside func()
    l.msg(); 
}

int main() {
    // Local l; // ❌ Error: Local class not accessible here
    func();  // Calls the function that uses the local class
    return 0;
}

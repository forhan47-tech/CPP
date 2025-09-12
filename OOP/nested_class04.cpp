#include <iostream>
using namespace std;

class SecureBox {
private:
    // Private nested class
    class Lock {
    public:
        void engage() {
            cout << "Lock engaged 🔒" << endl;
        }
    };

public:
    void secure() {
        Lock l;
        l.engage(); // Accessing private Lock from within SecureBox
    }
};

int main() {
    SecureBox b1;
    b1.secure(); 
    // SecureBox::Lock l; // ❌ Error: Lock is private and inaccessible here
    return 0;
}

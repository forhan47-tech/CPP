
#include <iostream>
using namespace std;

class Secure {
private:
    int pin;

    friend class Developer;
    friend void unlock(Secure);

public:
    // Constructor to set the pin
    Secure(int code) : pin(code) {}
};

class Developer {
public:
    void reveal(Secure s) {
        cout << "Developer Access: " << s.pin << endl;
    }
};

void unlock(Secure s) {
    cout << "Function Access: " << s.pin << endl;
}

int main() {
    Secure safe(4321);  // Initialize pin via constructor
    Developer dev;

    dev.reveal(safe);   // Friend class access
    unlock(safe);       // Friend function access

    return 0;
}

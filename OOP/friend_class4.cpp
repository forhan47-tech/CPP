#include <iostream>
using namespace std;

class Secrets {
private:
    int pin;

    // friend function
    friend void reveal(Secrets);

public:
    // Constructor to initialize pin
    Secrets(int code) : pin(code) {}
};

void reveal(Secrets obj) {
    cout << "Access granted: " << obj.pin << endl;
}

int main() {
    Secrets s(5678);  // Set pin through constructor
    reveal(s);        // ✅ Can access private pin
    return 0;
}

#include <iostream>
using namespace std;

class Secrets {
private:
    int pin = 1234;

    friend void reveal(Secrets); // friend function
};

void reveal(Secrets obj) {
    cout << "Access granted: " << obj.pin << endl;
}

int main() {
    Secrets s;
    reveal(s);  // ✅ Can access private pin
    return 0;
}

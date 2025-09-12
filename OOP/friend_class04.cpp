#include <iostream>
using namespace std;

class Secrets {
private:
    int pin;

    friend void reveal(Secrets); // friend function
    
public:
    Secrets(int code) : pin(code) {}
};

void reveal(Secrets obj) {
    cout << "Access granted: " << obj.pin << endl;
}

int main() {
    Secrets s(5678);  
    reveal(s);        // ✅ Can access private pin
    return 0;
}

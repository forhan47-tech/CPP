#include <iostream>
using namespace std;

// Class definition
class MyClass {
private:
    int secret;  // Private data member

public:
    // Setter function
    void setSecret(int x) {
        secret = x;
    }

    // Getter function
    int getSecret() {
        return secret;
    }
};

int main() {
    MyClass obj;

    // Set value using setter
    obj.setSecret(123);

    // Get and print value using getter
    cout << "The secret is: " << obj.getSecret() << endl;

    return 0;
}

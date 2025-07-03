#include <iostream>
using namespace std;

class Vault {
private:
    int secret;

    // Grant friendship to Spy
    friend class Spy;

public:
    // Constructor to initialize the secret
    Vault(int value) : secret(value) {}
};

class Spy {
public:
    void hack(Vault& v) {
        cout << "Accessing secret: " << v.secret << endl;
    }
};

int main() {
    Vault vault(98765);  // Use constructor to set secret
    Spy agent;
    agent.hack(vault);   // ✅ Can access private member
    return 0;
}

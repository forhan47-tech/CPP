#include <iostream>
using namespace std;

class Vault {
private:
    int secret = 12345;

    // Grant friendship to Spy
    friend class Spy;
};

class Spy {
public:
    void hack(Vault& v) {
        cout << "Accessing secret: " << v.secret << endl;
    }
};

int main() {
    Vault vault;
    Spy agent;
    agent.hack(vault);  // ✅ Can access private member
    return 0;
}

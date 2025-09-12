#include <iostream>
using namespace std;

class Vault {
private:
    int secret;

    friend class Spy; // Grant friendship to Spy

public:
    Vault(int value) : secret(value) {}
};

class Spy {
public:
    void hack(const Vault& v) {
        cout << "Accessing secret: " << v.secret << endl;
    }
};

int main() {
    Vault v1(98765);  
    
    Spy agent;
    agent.hack(v1);   // ✅ Can access private member
    return 0;
}

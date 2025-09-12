#include <iostream>
using namespace std;

class Vault {
private:    
    int secret = 12345;

    friend class Spy;  // spy is a friend class and can access private members
};

class Spy {
public:
    void hack(const Vault& obj) {
        cout << "Accessing secret: " << obj.secret << endl;
    }
};

int main() {
    Vault v1;

    Spy agent;
    agent.hack(v1);  // ✅ Can access private member
    return 0;
}

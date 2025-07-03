#include <iostream>
using namespace std;

class Encryptor {
private:
    class Key {
    public:
        string getSecret() { return "X@91#Z"; }
    };

public:
    void encrypt() {
        Key k;
        cout << "Encrypting using key: " << k.getSecret() << endl;
    }
};

int main() {
    Encryptor e;
    e.encrypt();
    return 0;
}

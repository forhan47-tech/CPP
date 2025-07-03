#include <iostream>
using namespace std;

class SecretData {
private:
    string raw;
    char key = 'K';  // Simple XOR key

    string xorEncrypt(string input) {
        for (char& c : input)
            c ^= key;
        return input;
    }

public:
    void setData(string s) {
        raw = xorEncrypt(s);
    }

    string getDecrypted() {
        return xorEncrypt(raw);  // decrypt using same logic
    }
};

int main() {
    SecretData secure;
    secure.setData("TopSecret");

    cout << "Decrypted: " << secure.getDecrypted() << endl;
    return 0;
}

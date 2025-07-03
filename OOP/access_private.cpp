#include <iostream>
using namespace std;

class Locker {
private:
    int code = 1234;  // private member

public:
    void revealCode() {
        cout << "Code inside class: " << code << endl;  // ✅ allowed
    }
};

int main() {
    Locker l;

    l.revealCode();  // ✅ works fine
    // cout << l.code << endl;  // ❌ Error: 'code' is private

    return 0;
}

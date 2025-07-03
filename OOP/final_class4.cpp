#include <iostream>
using namespace std;

class Security final {
public:
    virtual void verify() final {
        cout << "Verification complete" << endl;
    }
};

// class AdvancedSecurity : public Security {};  // ❌ Error: cannot inherit final class

int main() {
    Security s;
    s.verify();
    return 0;
}

#include <iostream>
using namespace std;

class Config final {
public:
    void load() {
        cout << "Configuration loaded." << endl;
    }
};

// class CustomConfig : public Config {};  // ❌ Error: Cannot inherit from final class

int main() {
    Config cfg;
    cfg.load();
    return 0;
}

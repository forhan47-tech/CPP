#include <iostream>
#include <string>
using namespace std;

class FileEntry {
public:
    string name;

    void audit() const {
        auto logger = [](const string& msg) {
            cout << "[AUDIT] " << msg << "\n";
        };
        logger("Accessed file: " + name);
    }
};

int main() {
    FileEntry entry{"manifest.cpp"};
    entry.audit();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class ManifestEntry {
public:
    string filename;
};

class Logger {
public:
    void log(const ManifestEntry& entry) {
        cout << "Logging: " << entry.filename << "\n";
    }
};

int main() {
    ManifestEntry entry;
    entry.filename = "module_renamed.cpp";

    Logger logger;
    logger.log(entry);
    return 0;
}

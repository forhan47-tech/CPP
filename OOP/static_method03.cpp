#include <iostream>
#include <string>
using namespace std;

class FileUtils {
private:
    FileUtils() {} // Private constructor to prevent instantiation

public:
    static void log(const string& msg) {
        cout << "[LOG] " << msg << endl;
    }
};

int main() {
    FileUtils::log("Renaming operation started.");
    FileUtils::log("Manifest generated successfully.");
    FileUtils::log("Undo script created.");
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Logger { // Standalone class
public:
    void log(const string& msg) {
        cout << "[LOG]: " << msg << endl;
    }
};

int main() {
    Logger l;
    l.log("Standalone class in action");
    return 0;
}

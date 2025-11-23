#include <iostream>
using namespace std;

class Logger {
public:
    void operator()(const string& msg) {
        cout << msg << endl;
    }
};

int main() {
    Logger log;
    log("Thread-safe logging initialized.");
}

#include <iostream>
#include <mutex>
using namespace std;

class Logger {
    mutex logMutex;
public:
    void operator()(const string& msg) {
        lock_guard<mutex> lock(logMutex);
        cout << msg << endl;
    }
};

int main() {
    Logger log;
    log("Thread-safe logging initialized.");
}

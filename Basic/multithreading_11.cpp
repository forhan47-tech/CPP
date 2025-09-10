#include <iostream>
#include <mutex>
#include <string>
using namespace std;

mutex logMutex;

void logMessage(const string& msg) {
    lock_guard<mutex> lock(logMutex);
    cout << msg << endl;
}

int main() {
    logMessage("Thread-safe logging initialized.");
}

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

void safe_print(const string& message) {
    lock_guard<mutex> guard(m); // Lock is acquired
    cout << message << "\n";    // Safe access
}                               // Lock released automatically here

int main() {
    thread t1(safe_print, "Hello from thread 1");
    thread t2(safe_print, "Hello from thread 2");
    t1.join();
    t2.join();
}

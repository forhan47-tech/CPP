#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void printMessage(string msg) {
    lock_guard<mutex> lock(mtx); // safer than manual lock/unlock
    cout << msg << endl;
}

int main() {
    thread t1(printMessage, "Thread 1");
    thread t2(printMessage, "Thread 2");

    t1.join();
    t2.join();

    return 0;
}

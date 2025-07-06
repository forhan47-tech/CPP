#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx; // global mutex

void printMessage(string msg) {
    mtx.lock();
    cout << msg << endl;
    mtx.unlock();
}

int main() {
    thread t1(printMessage, "Thread 1");
    thread t2(printMessage, "Thread 2");

    t1.join();
    t2.join();

    return 0;
}

#include <iostream>
#include <thread>
using namespace std;

void task() {
    cout << "Hello from thread!" << endl;
}

int main() {
    thread t(task);   // start a new thread
    t.join();         // wait for thread to finish
}

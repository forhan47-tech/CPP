#include <iostream>
#include <thread>
using namespace std;

void task() { cout << "Work done!" << endl; }

int main() {
    thread t(task);
    t.join();

    if (!t.joinable()) {
        cout << "Thread is no longer joinable." << endl;
    }
}

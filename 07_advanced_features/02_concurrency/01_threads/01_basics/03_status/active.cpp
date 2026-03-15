#include <iostream>
#include <thread>
using namespace std;

void task() {
    cout << "Thread is running..." << endl;
}

int main() {
    thread t(task);

    if (t.joinable()) {   // check if thread can be joined
        cout << "Thread is joinable!" << endl;
        t.join();
    }

    cout << "Main thread finished!" << endl;
}

#include <iostream>
#include <thread>
using namespace std;

void backgroundTask() {
    cout << "Background task running..." << endl;
}

int main() {
    thread t(backgroundTask);
    t.detach();

    if (!t.joinable()) {
        cout << "Thread detached, not joinable anymore." << endl;
    }
}

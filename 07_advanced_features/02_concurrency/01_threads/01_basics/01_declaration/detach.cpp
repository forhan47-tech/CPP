#include <iostream>
#include <thread>
using namespace std;

void backgroundTask() {
    cout << "Running in background..." << endl;
}

int main() {
    thread t(backgroundTask);
    t.detach(); // runs independently, main doesn’t wait
    cout << "Main thread continues..." << endl;
}

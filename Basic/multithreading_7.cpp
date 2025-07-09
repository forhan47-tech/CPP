#include <iostream>
#include <thread>

using namespace std;

// Function to run in a thread
void printMessage(const string& msg, int count) {
    for (int i = 0; i < count; ++i) {
        cout << msg << " (" << i + 1 << ")" << endl;
    }
}

int main() {
    // Create threads
    thread t1(printMessage, "Hello from thread 1", 3);
    thread t2(printMessage, "Hello from thread 2", 5);

    // Wait for threads to finish
    t1.join();
    t2.join();

    cout << "Main thread done." << endl;

    return 0;
}

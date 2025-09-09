#include <iostream>
#include <thread>
using namespace std;

void task() {
    cout << "Hello from thread!\n";
}

int main() {
    thread t(task); // Start thread
    
    t.join();       // Wait for thread to finish
    cout << "Main thread finished.\n";
    return 0;
}

#include <iostream>
#include <thread>
using namespace std;

void greet() {
    cout << "Hello from thread!" << endl;
}

int main() {
    thread t1(greet);  // Create thread
    t1.join();         // Wait for thread to finish
    cout << "Main thread continues." << endl;
    return 0;
}

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void backgroundTask() {
    cout << "Running in background...\n";
    this_thread::sleep_for(chrono::seconds(1)); 
    cout << "Background task finished.\n";
}

int main() {
    thread t(backgroundTask);
    t.detach(); 
    cout << "Main thread continues...\n";

    // Give the detached thread time to complete
    this_thread::sleep_for(chrono::seconds(2));
    return 0;
}

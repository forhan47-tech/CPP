#include <iostream>
#include <thread>
using namespace std;

void backgroundTask() {
    cout << "Running in background...\n";
}

int main() {
    thread t(backgroundTask);
    
    t.detach(); // Runs independently
    cout << "Main thread continues...\n";
    return 0;
}

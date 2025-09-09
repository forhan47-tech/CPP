#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

int main() {
    cout << "Waiting for 2 seconds...\n";
    this_thread::sleep_for(seconds(2)); // Simulate work
    cout << "Done!\n";
    return 0;
}

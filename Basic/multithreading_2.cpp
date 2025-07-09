#include <iostream>
#include <thread>

using namespace std;

void print(int x) {
    cout << "Value: " << x << "\n";
}

int main() {
    thread t(print, 42); // Create thread

    t.join(); // Wait for thread to finish

    return 0;
}

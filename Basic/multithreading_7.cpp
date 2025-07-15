#include <iostream>
#include <thread>

using namespace std;

int main() {
    int x = 10, y = 20;

    // Launch a thread using a lambda that captures x and y by value
    thread t([=]() {
        cout << "Sum: " << x + y << endl;
    });

    // Wait for the thread to complete
    t.join();

    cout << "Main thread finished." << endl;
    return 0;
}

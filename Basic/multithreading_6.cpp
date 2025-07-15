#include <iostream>
#include <thread>

using namespace std;

int main() {
    // Create and launch a thread using a lambda expression
    thread t([](int a, int b) {
        cout << "Sum: " << a + b << endl;
    }, 5, 3);

    t.join(); // Wait for thread to finish

    cout << "Main thread finished." << endl;
    return 0;
}

#include <iostream>
#include <thread>

using namespace std; 

// Function to be executed by thread
void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    thread t(add, 5, 3);

    // Wait for the thread to complete
    t.join();

    cout << "Main thread finished." << endl;
    return 0;
}

#include <iostream>
#include <thread>
#include <future>

using namespace std;

void deliverData(promise<int> p) {
    this_thread::sleep_for(chrono::seconds(1)); // Simulate work
    p.set_value(99); // Send result
}

int main() {
    promise<int> p;
    future<int> f = p.get_future(); // Link the future to promise

    thread t(deliverData, move(p)); // Pass promise into thread

    cout << "Waiting for result..." << endl;
    cout << "Result received: " << f.get() << endl; // blocks until set_value is called

    t.join();
    return 0;
}

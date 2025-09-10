#include <iostream>
#include <future>
using namespace std;

int compute(int a, int b) {
    this_thread::sleep_for(chrono::seconds(1));
    return a + b;
}

int main() {
    // Launch asynchronously with two arguments
    future<int> result = async(launch::async, compute, 20, 22);

    cout << "Waiting for result...\n";
    cout << "Result: " << result.get() << endl; // Blocks until ready

    return 0;
}

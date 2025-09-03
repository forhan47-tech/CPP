#include <iostream>
#include <future>

using namespace std;

int compute(int x) {
    return x * x;
}

int main() {
    future<int> result = async(compute, 5); // runs in background
    cout << "Doing other work..." << endl;

    cout << "Result: " << result.get() << endl; // waits for result
    return 0;
}

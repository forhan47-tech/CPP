#include <iostream>
#include <functional>

using namespace std;

// Define a regular function that matches the signature
void handleEvent(int code) {
    cout << "std::function handled event with code: " << code << endl;
}

int main() {
    function<void(int)> handler;

    // Assign the regular function to std::function
    handler = handleEvent;

    // Trigger the event
    handler(42);

    return 0;
}

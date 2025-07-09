#include <iostream>
#include <functional>

using namespace std;

int main() {
    // Declare a flexible event handler using std::function
    function<void(int)> handler;

    // Assign a lambda to handle the event
    handler = [](int code) {
        cout << "std::function handled event with code: " << code << endl;
    };

    // Trigger the event
    handler(42);

    return 0;
}

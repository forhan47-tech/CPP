#include <iostream>
#include <functional>

using namespace std;

int main() {
    function<void(int)> handler;

    handler = [](int code) {
        cout << "function handled event with code: " << code << endl;
    };
    // Trigger the event
    handler(42);

    return 0;
}

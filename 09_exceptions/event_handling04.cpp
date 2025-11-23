#include <iostream>
#include <functional>
using namespace std;

void handleEvent(int code) {
    cout << "function handled event with code: " << code << endl;
}

int main() {
    function<void(int)> handler;

    handler = handleEvent;
    // Trigger the event
    handler(42);

    return 0;
}

#include <iostream>
#include <functional>

using namespace std;

// Named handler function
void eventHandler(int value) {
    cout << "Event handled with value: " << value << '\n';
}

// Trigger function accepting a callback
void triggerEvent(const function<void(int)>& callback) {
    int data = 5;
    callback(data);  // Event triggered
}

int main() {
    triggerEvent(eventHandler);  // Pass named function instead of lambda
    return 0;
}

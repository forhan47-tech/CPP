#include <iostream>
#include <functional>

using namespace std;

void triggerEvent(const function<void(int)>& callback) {
    int data = 5;
    callback(data);  // Event triggered
}

int main() {
    auto handler = [](int value) {
        cout << "Event handled with value: " << value << '\n';
    };

    triggerEvent(handler);
    return 0;
}

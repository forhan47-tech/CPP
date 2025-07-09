#include <iostream>
#include <functional>
using namespace std;

// Event handler function
void greet() {
    cout << "Button clicked! Hello, Naimuddin!" << endl;
}

int main() {
    // std::function to hold the event handler
    function<void()> onClick;

    // Assign the handler
    onClick = greet;

    // Simulate button click
    if (onClick) {
        onClick();
    } else {
        cout << "No action assigned to onClick." << endl;
    }

    return 0;
}

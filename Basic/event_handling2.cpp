#include <iostream>
using namespace std;

// Event handler function
void greet() {
    cout << "Button clicked! Hello, Naimuddin!" << endl;
}

int main() {
    // Function pointer to hold the event handler
    void (*onClick)();

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

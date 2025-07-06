#include <iostream>
using namespace std;

class Button {
public:
    void (*onClick)(); // Function pointer as event handler

    void click() {
        if (onClick) onClick(); // Trigger handler
    }
};

// Event handler function
void greet() {
    cout << "Button clicked! Hello, Naimuddin!" << endl;
}

int main() {
    Button b;
    b.onClick = greet; // Assign handler
    b.click();         // Simulate click

    return 0;
}

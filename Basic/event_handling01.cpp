#include <iostream>
#include <functional>
using namespace std;

int main() {
    function<void()> onClick;

    // Assign a lambda to onClick
    onClick = []() {
        cout << "Lambda says: Button was clicked!" << endl;
    };

    // Simulate a button click
    if (onClick) {
        onClick();
    } else {
        cout << "No action assigned to onClick." << endl;
    }

    return 0;
}

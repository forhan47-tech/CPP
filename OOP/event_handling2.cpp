#include <iostream>
#include <functional> // for std::function

using namespace std;

class Button {
public:
    function<void()> onClick; // Callback function

    void click() {
        if (onClick) {
            onClick(); // Trigger the lambda
        } else {
            cout << "No action assigned to onClick." << endl;
        }
    }
};

int main() {
    Button b;
    b.onClick = []() {
        cout << "Lambda says: Button was clicked!" << endl;
    };
    b.click();

    return 0;
}

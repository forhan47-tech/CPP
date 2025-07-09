#include <iostream>
#include <functional>
using namespace std;

class Button {
public:
    function<void(string)> onClick;

    void click(string label) {
        if (onClick) {
            onClick(label);
        }
    }
};

int main() {
    Button b;
    b.onClick = [](string label) {
        cout << "Button '" << label << "' was clicked!" << endl;
    };
    b.click("Play");
}

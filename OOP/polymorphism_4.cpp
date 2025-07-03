#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(double b) {
        cout << "Double: " << b << endl;
    }

    void display(const string& s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print printer;

    printer.display(10);         // Integer: 10
    printer.display(3.14159);    // Double: 3.14159
    printer.display("NAIMUDDIN"); // String: NAIMUDDIN

    return 0;
}

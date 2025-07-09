#include <iostream>
#include <exception>
using namespace std;

class Divider {
public:
    int divide(int a, int b) {
        if (b == 0) {
            throw runtime_error("Division by zero!");
        }
        return a / b;
    }
};

int main() {
    Divider div;

    try {
        cout << div.divide(10, 0);  // This will throw an exception
    } catch (const runtime_error& err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}

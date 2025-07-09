#include <iostream>
using namespace std;

class EventHandler {
public:
    void operator()(int code) const {
        cout << "Handled event with code: " << code << endl;
    }
};

int main() {
    EventHandler handler;
    handler(42); // Output: Handled event with code: 42
    return 0;
}

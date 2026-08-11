#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw logic_error("invalid operation!");
    } catch (logic_error &e) {
        cout << "Caught: " << e.what() << endl;
    }
}

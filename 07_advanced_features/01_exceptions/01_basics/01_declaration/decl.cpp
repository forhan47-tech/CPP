#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("Something went wrong!"); // throwing
    } catch (const exception& e) {
        cout << "Caught: " << e.what() << endl;
    }
}

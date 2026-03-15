#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("Something went wrong!");
    } catch (invalid_argument& e) {
        cout << "Caught: " << e.what() << endl;
    } catch (...) {
        cout << "Caught something else!" << endl; // catch-all after specific handlers
    }
}

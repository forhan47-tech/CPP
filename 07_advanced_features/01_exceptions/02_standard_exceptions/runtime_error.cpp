#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("Something went wrong!");
    } catch (runtime_error &e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }
}

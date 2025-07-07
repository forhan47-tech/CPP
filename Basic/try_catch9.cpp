#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        // Simulate a logic error
        throw out_of_range("Index error");
    } catch (const logic_error& e) {
        cerr << "Logic error: " << e.what() << endl;
    } catch (...) {
        cerr << "Unknown exception caught\n";
    }

    return 0;
}

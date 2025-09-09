#include <iostream>
using namespace std;

int main() {
    try {
        throw logic_error("Invalid logic detected");
    } catch (const exception& e) {
        cout << "Function error: " << e.what() << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for (;;) { // No condition → infinite loop
        cout << "Running..." << endl;
        break; // Prevents endless output
    }
    return 0;
}

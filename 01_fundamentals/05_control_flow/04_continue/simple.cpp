#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Skipping i = " << i << endl;
            continue; // skip iteration when i = 3
        }
        cout << "Iteration: " << i << endl;
    }
    return 0;
}

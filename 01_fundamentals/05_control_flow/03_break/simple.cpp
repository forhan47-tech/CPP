#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            cout << "Breaking at i = " << i << endl;
            break; // exits loop completely
        }
        cout << "Iteration: " << i << endl;
    }
    cout << "Loop ended." << endl;
    return 0;
}

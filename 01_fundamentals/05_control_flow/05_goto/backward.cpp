#include <iostream>
using namespace std;

int main() {
    int i = 1;

    loop_start:
    if (i <= 5) {
        cout << "Iteration: " << i << endl;
        i++;
        goto loop_start; // jump back to label
    }

    cout << "Loop ended." << endl;
    return 0;
}

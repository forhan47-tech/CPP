#include <iostream>
using namespace std;

int main() {
    for (;;) { // no condition, runs forever
        cout << "This will run infinitely!" << endl;
        break; // added break to stop
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    do {
        cout << "This runs once even though condition is false!" << endl;
    } while (x < 5); // false condition

    return 0;
}

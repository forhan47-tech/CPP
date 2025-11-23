#include <iostream>
using namespace std;

int main() {
    int x = 5;

    if (x > 0) goto positive;

    cout << "This will be skipped" << endl;

positive:
    cout << "x is positive" << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i = 10;

    while (i < 5) {
        cout << "This will never print" << endl;
    }

    cout << "Loop skipped because condition false" << endl;
    return 0;
}

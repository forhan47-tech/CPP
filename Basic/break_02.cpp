#include <iostream>
using namespace std;

int main() {
    int i = 0;

    while (true) {
        if (i == 5) break; // stop at 5
        cout << "i = " << i << endl;
        i++;
    }

    return 0;
}

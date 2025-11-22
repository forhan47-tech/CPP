#include <iostream>
using namespace std;

int main() {
    int n = 2;

    switch (n) {
        case 1: cout << "One" << endl;
        case 2: cout << "Two" << endl;
        case 3: cout << "Three" << endl;
        default: cout << "Default" << endl;
    }

    return 0;
}

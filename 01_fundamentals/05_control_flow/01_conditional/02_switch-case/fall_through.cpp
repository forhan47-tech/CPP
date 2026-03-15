#include <iostream>
using namespace std;

int main() {
    int num = 2;

    switch (num) {
        case 1: cout << "One\n";
        case 2: cout << "Two\n"; // no break
        case 3: cout << "Three\n"; // no break
        default: cout << "Default\n";
    }
    return 0;
}

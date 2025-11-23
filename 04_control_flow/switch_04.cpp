#include <iostream>
using namespace std;

int main() {
    int category = 1;
    int item = 2;

    switch (category) {
        case 1:
            switch (item) {
                case 1: cout << "Category 1 - Item 1" << endl; break;
                case 2: cout << "Category 1 - Item 2" << endl; break;
            }
            break;
        default:
            cout << "Other category" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 2;

    switch (n) {
        case 1:  case 2: 
            cout << "One" << endl;   // executes for n=1 or n=2

        case 3:  
            cout << "Three" << endl; // fall-through continues here

        case 4:  
            cout << "Four" << endl;  // break stops execution here
            break;

        default: 
            cout << "Default" << endl;
    }

    return 0;
}

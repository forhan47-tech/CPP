#include <iostream>
using namespace std;

enum class Color { 
    Red, Green, Blue 
};

int main() {
    Color c1 = Color::Red; // comparison works within same enum
    Color c2 = Color::Green;

    if (c1 == c2) {
        cout << "Same color" << endl;
    } else {
        cout << "Different colors" << endl;
    }
    return 0;
}

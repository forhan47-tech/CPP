#include <iostream>
using namespace std;

enum class Color { 
    Red, Green, Blue 
};

int main() {
    Color c = Color::Red;
    if (c == Color::Red) {
        cout << "Color is Red" << endl;
    }
    return 0;
}

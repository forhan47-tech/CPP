#include <iostream>
using namespace std;

enum Color { Red, Green, Blue };

int main() {
    Color c = Green; // Assign enum value
    cout << "Color value: " << c << endl; // Prints 1 (Green = 1)
    return 0;
}

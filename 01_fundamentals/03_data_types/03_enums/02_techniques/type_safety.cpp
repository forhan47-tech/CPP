#include <iostream>
using namespace std;

enum class Color { 
    Red, Green, Blue 
};

int main() {
    Color c = Color::Red;
    cout << "Color value: " << static_cast<int>(c) << endl;
    return 0;
}

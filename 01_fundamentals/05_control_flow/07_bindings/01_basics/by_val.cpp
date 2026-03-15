#include <iostream>
using namespace std;

int main() {
    int rgb[3] = {255, 128, 64}; // color components

    auto [r, g, b] = rgb; // copies
    g = 200;

    cout << "Original RGB: " << rgb[0] << ", " << rgb[1] << ", " << rgb[2] << endl;
    cout << "Updated RGB: " << r << ", " << g << ", " << b << endl;
}

#include <iostream>
using namespace std;

int main() {
    int rgb[3] = {255, 128, 64}; // color components

    const auto& [r, g, b] = rgb; // const references - can't modify

    cout << "Original RGB: " << rgb[0] << ", " << rgb[1] << ", " << rgb[2] << endl;
    cout << "Read-only RGB: " << r << ", " << g << ", " << b << endl;
}

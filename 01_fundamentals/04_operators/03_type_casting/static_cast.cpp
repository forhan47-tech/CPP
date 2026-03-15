#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = static_cast<double>(x) / 2; // safe numeric conversion
    cout << "y: " << y << endl;
    return 0;
}

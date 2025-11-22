#include <iostream>
using namespace std;

int main() {
    double d = 9.99;
    int i = static_cast<int>(d); // double → int

    cout << "Original: " << d << ", After static_cast: " << i << endl;
    return 0;
}

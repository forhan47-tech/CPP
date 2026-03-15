#include <iostream>
using namespace std;

volatile int val = 0; // compiler will not optimize away reads

int main() {
    val = 10;
    cout << "Value: " << val << endl;
    return 0;
}

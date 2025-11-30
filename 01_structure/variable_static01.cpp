#include <iostream>
using namespace std;

void counter() {
    static int count = 0; // retains value across calls
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}

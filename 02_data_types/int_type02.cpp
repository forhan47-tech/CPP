#include <iostream>
using namespace std;

int main() {
    short s = 32767;       // usually 2 bytes
    long l = 123456789;    // usually 4 or 8 bytes

    cout << "Short: " << s << endl;
    cout << "Long: " << l << endl;
    return 0;
}

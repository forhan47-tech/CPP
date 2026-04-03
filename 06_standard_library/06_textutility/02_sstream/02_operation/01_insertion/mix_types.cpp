#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "Pi = " << 3.14159 << ", Answer = " << 42;
    cout << ss.str() << endl;
    return 0;
}

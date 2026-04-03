#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "Hello World";   // write into buffer
    cout << ss.str() << endl; // get buffer
    return 0;
}

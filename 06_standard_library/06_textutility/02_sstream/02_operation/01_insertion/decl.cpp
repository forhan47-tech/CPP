#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "Hello " << "World";
    cout << ss.str() << endl;
    return 0;
}

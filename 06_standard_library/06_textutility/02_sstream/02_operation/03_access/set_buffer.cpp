#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss.str("Initial Data");   // set buffer
    cout << ss.str() << endl; // print buffer
    return 0;
}

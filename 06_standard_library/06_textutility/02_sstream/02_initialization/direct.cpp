#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("123 456");
    int a, b;
    ss >> a >> b; // read from stream
    cout << a << " , " << b << endl;
}

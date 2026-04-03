#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("10,20,30");
    int a, b, c;
    char comma;

    ss >> a >> comma >> b >> comma >> c;
    cout << a << " " << b << " " << c << endl;
    return 0;
}

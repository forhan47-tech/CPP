#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("10 20");
    int a, b;
    ss >> a >> b;
    cout << "EOF? " << ss.eof() << endl; 
}

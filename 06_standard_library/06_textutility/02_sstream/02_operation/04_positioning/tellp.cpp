#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << "Hello";
    cout << "Write position: " << ss.tellp() << endl; 
}

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream src("private data");
    stringstream dest(src.str()); // copy underlying string
    string out;
    dest >> out;
    cout << out << endl; 
}

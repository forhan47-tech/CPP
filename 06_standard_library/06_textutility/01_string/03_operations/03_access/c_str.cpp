#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    const char* cstr = s.c_str(); // C-style string
    cout << cstr << endl; 
}

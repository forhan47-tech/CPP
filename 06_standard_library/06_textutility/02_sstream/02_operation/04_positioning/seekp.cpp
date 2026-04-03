#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("abcdef");
    ss.seekp(3); // move write pointer to index 3
    ss << 'X';   // overwrite at position 3
    cout << ss.str() << endl; 
}

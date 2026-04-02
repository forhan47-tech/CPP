#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Contiguous";
    const char* cptr = s.data(); // contiguous memory
    cout << "First char: " << *cptr << endl; 
}

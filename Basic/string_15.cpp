#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "C++";
    string copy;

    copy.assign(original);  // Assign using `assign()`
    cout << "Original: " << original << "\nCopy: " << copy << endl;
    
    copy = original;  // Alternative way to copy
    cout << "Original: " << original << "\nCopy: " << copy << endl;

    return 0;
}


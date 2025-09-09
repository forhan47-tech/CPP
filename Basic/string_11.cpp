#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "C++";
    string copy;

    // Assign using `assign()`
    copy.assign(original); 
    cout << "Original: " << original << "\nCopy: " << copy << endl;
    
    // Alternative way to copy
    copy = original;  
    cout << "Original: " << original << "\nCopy: " << copy << endl;
    return 0;
}


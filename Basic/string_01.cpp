#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";  // Direct initialization
    string str2(5, 'A'); // Initialize with 5 'A's
    
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    cout << "Characters: ";
    for (char ch : str1) {
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}



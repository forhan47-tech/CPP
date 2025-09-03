#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    
    string combined = str1 + str2;  // Using +
    combined += "Welcome to C++."; // Using +=
    
    cout << "Combined: " << combined << endl;
    
    str1.append(str2);  // Using append()
    cout << "Appended: " << str1 << endl;

    return 0;
}


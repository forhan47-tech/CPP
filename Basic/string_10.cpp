#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";

    // Using + and +=
    string combined = str1 + str2;  

    combined += "Welcome to C++.";  
    cout << "Combined: " << combined << endl;
    
    // Using append()
    str1.append(str2);  
    cout << "Appended: " << str1 << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    cout << "First character: " << str.front() << endl;
    cout << "Last character: " << str.back() << endl;

    cout << "Character at index 2: " << str.at(2) << endl; // Safe access
    cout << "Character at index 2: " << str[4] << endl;   // Direct index access 
    return 0;
}


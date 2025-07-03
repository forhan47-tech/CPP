#include <iostream>
#include <string>
using namespace std;

string getGreeting() {  // Function returns `string`
    return "Hello, C++ Programmer!";
}

int main() {
    string message = getGreeting();  // Store returned value
    cout << message << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

string getGreeting() {  
    return "Hello, C++ Programmer!";
}

int main() {
    string message = getGreeting(); 
    cout << message << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

string greet(string name) { // return string
    return "Hello, " + name + "!";
}

int main() {
    cout << greet("NAIMUDDIN") << endl;
    return 0;
}

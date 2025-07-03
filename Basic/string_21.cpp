#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "100";
    cout << "Integer Value: " << stoi(str) << endl;

    int num = 100;
    cout << "String Value: " << to_string(num) + " is now a string!" << endl;

    return 0;
}


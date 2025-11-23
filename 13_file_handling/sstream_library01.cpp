#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int age = 25;
    string name = "John";
    stringstream ss;

    ss << "Name: " << name << ", Age: " << age;
    string result = ss.str();

    cout << result << endl;
    return 0;
}

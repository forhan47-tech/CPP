#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("Alice 25 Bob 30");
    string name; int age;
    while (ss >> name >> age) {
        cout << name << " -> " << age << endl;
    }
}

#include <iostream>
using namespace std;

void printInfo(string name = "Unknown", int age = 0) {
    cout << "Name: " << name << ", Age: " << age << endl; 
}

int main() {
    printInfo();               
    printInfo("Alice");          
    printInfo("Bob", 25);   // skip arguments only from right to left
}

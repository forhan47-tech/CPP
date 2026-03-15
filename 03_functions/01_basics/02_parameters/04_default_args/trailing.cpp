#include <iostream>
using namespace std;

void displayInfo(string name = "Unknown", int age = 0) {
    cout << name << " is " << age << " years old." << endl; // skip arguments only from right to left
}

int main() {
    displayInfo("Bob", 30);  
    displayInfo("Charlie");   
    displayInfo();        
}

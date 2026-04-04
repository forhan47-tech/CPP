#include <iostream>
using namespace std;

void printInfo(string name, int age = 0) {
    cout << "Name: " << name << ", Age: " << age << endl;   // must be placed after non-default ones 
}

int main() {;            
    printInfo("Alice");          
    printInfo("Bob", 25);   
}

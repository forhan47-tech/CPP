#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();            
    greet("NAIMUDDIN");   
    return 0;
}

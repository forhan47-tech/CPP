#include <iostream>
using namespace std;

// Function overloading
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

void display(string text) {
    cout << "String: " << text << endl;
}

int main() {
    display(42);          
    display(3.14);        
    display("Hello");    
    return 0;
}


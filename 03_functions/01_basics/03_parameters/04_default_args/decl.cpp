#include <iostream>
using namespace std;

void showMessages(string name = "Guest") { 
    cout << "Hello, " << name << "!" << endl;   // default parameter
}

int main() {
    showMessages("Alice"); // uses provided value
    showMessages(); // uses default "Guest"
}

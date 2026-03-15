#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << endl;
}

void greet(string name, string title) {
    cout << "Hello, " << title << " " << name << endl;
}

int main() {
    greet("Alice");          
    greet("Alice", "Dr.");   
}

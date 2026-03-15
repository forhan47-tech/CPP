#include <iostream>
using namespace std;

void introduce(string name, string title = "Mr./Ms.") {
    cout << title << " " << name << endl; // must be placed after non-default ones
}

int main() {
    introduce("Diana");       
    introduce("Ethan", "Dr.");    
}

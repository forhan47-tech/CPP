#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout << "Enter your name: ";
    cin >> name; // stops at whitespace
    cout << "You entered: " << name << endl;
    return 0;
}

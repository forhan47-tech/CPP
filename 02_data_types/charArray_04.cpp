#include <iostream>
using namespace std;

int main() {
    char str[20];
    cout << "Enter your name: ";
    cin >> str; // stops at whitespace
    cout << "You entered: " << str << endl;
    return 0;
}

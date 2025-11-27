#include <iostream>
using namespace std;

int main() {
    bool flag;
    cout << "Enter 1 for true, 0 for false: ";
    cin >> flag;   // user types 1 or 0
    cout << "You entered: " << boolalpha << flag << endl;
    return 0;
}

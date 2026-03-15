#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        if (hasID) {
            cout << "Entry allowed" << endl;
        } else {
            cout << "ID required" << endl;
        }
    } else {
        cout << "Underage" << endl;
    }
    return 0;
}

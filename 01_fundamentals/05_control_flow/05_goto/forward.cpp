#include <iostream>
using namespace std;

int main() {
    cout << "Start" << endl;

    goto skip; // jump to label

    cout << "This will be skipped!" << endl;

    skip:
    cout << "Jumped here using goto." << endl;

    return 0;
}

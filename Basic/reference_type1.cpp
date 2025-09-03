#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Declare an integer variable
    int &ref = num;    // 'ref' is a reference (alias) to 'num'

    cout << "Original num: " << num << endl; // Outputs: 10
    cout << "Reference ref: " << ref << endl; // Outputs: 10

    ref = 20;  // Modify 'num' through the reference
    cout << "Modified num: " << num << endl; // Outputs: 20

    return 0;
}


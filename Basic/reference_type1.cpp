#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Declare an integer variable
    int &ref = num;    // 'ref' is a reference (alias) to 'num'

    cout << "Original num: " << num << endl; // Outputs: 10
    ref = 20;                               // Modify the value through the reference
    cout << "Modified num: " << num << endl; // Outputs: 20

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num = 10;     
    int &ref = num;    // 'ref' is a reference (alias) to 'num'

    cout << "Original num: " << num << endl; 
    cout << "Reference ref: " << ref << endl; 

    // Modify value
    ref = 20; 
    cout << "Modified num: " << num << endl; 

    return 0;
}


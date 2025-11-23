#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int& ref = a; // ref is another name for a

    cout << "Value of a: " << a << endl;
    cout << "Value via ref: " << ref << endl;

    ref = 200; // Changing ref also changes a
    cout << "Updated a: " << a << endl;
    return 0;
}

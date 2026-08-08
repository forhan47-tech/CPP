#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 15;

    int *ptr = &a; // points to a
    cout << *ptr << endl;

    ptr = &b; // points to b
    cout << *ptr << endl;
}

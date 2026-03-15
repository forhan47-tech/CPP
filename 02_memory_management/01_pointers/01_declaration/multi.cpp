#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 15;
    int *p1 = &a, *p2 = &b; // both are pointers

    cout << *p1 << endl; 
    cout << *p2 << endl; 
}

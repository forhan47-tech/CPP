#include <iostream>
using namespace std;

int main() {
    int x = 100;

    int* ptr = &x; 
    cout << "Value of x: " << *ptr << endl;

    *ptr = 50;
    cout << "Value of x: " << x << endl;
}

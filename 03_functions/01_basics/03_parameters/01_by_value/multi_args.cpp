#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b; // works with copies
}

int main() {
    int x = 5, y = 7;
    cout << "Sum = " << add(x, y) << endl; 
}

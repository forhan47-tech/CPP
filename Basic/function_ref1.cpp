#include <iostream>
using namespace std;

void passByReference(int &x) {
    x = x + 10; // Modify x inside the function
}

int main() {
    int num = 5;

    passByReference(num); // Passing the reference of 'num'
    
    cout << "Value after function call: " << num; // Original 'num' is modified
    return 0;
}


#include <iostream>
using namespace std;

void passByReference(int &x) { // Pass by reference
    x = x + 10; 
}

int main() {
    int num = 5;

    passByReference(num); // Passed without copying
    cout << "Value after function call: " << num; 
    return 0;
}


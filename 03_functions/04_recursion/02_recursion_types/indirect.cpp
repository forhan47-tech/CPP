#include <iostream>
using namespace std;

bool isOdd(int n);   // forward declaration

bool isEven(int n) {
    if (n == 0) return true;   
    return isOdd(n - 1);         // calls Odd
}

bool isOdd(int n) {
    if (n == 0) return false;   
    return isEven(n - 1);        // calls Even
}

int main() {
    cout << "7 is odd? " << isOdd(7) << endl;  
    cout << "10 is even? " << isEven(10) << endl; 
}

#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0; // returns true or false
}

int main() {
    cout << "Is 10 even? " << isEven(10) << endl; 
    cout << "Is 7 even? " << isEven(7) << endl; 
}

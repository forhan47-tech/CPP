#include <iostream>
using namespace std;

void printValue(const int x) { 
    cout << "Value: " << x << endl;
}

int main() {
    int num = 10;
    printValue(num); // safe, cannot be changed inside function
}

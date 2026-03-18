#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b; 
}

double add(double a, double b) {
    return a + b; 
}

int main() {
    cout << add(3, 4) << endl;   // calls int version  
    cout << add(3.5, 4.5) << endl; // calls double version
}

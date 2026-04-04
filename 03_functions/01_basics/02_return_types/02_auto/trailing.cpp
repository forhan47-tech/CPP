#include <iostream>
using namespace std;

auto multiply(int a, double b) -> double {
    return a * b; // explicitly declared as double
}

int main() {
    cout << multiply(3, 2.5) << endl; 
}

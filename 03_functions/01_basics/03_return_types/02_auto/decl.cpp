#include <iostream>
using namespace std;

auto multiply(int a, int b) {
    return a * b; // deduced as int
}

int main() {
    cout << multiply(3,4) << endl; 
}

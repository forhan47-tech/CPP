#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(5, 10) << endl;  // calls 2-arg version 
    cout << add(1, 2, 3) << endl;  // calls 3-arg version
    return 0;
}
#include <iostream>
using namespace std;

// Function overloading
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << add(5, 10) << endl;    
    cout << add(1, 2, 3) << endl;  
    return 0;
}

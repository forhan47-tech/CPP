#include <iostream>
using namespace std;

int add(int a, int b) { 
    return a + b; 
}

int mul(int a, int b) { 
    return a * b; 
}

void compute(int x, int y, int (*func)(int, int)) {
    cout << "Result: " << func(x, y) << endl;
}

int main() {
    compute(4, 2, add);     
    compute(4, 2, mul);
    return 0;
}
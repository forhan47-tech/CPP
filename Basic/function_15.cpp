#include <iostream>
using namespace std;

void calculate(int a, int b, int &sum, int &product) {
    sum = a + b;
    product = a * b;
}

int main() {
    int sum, product;

    calculate(3, 4, s, p);  
    cout << "Sum: " << s << ", Product: " << p << endl;
    return 0;
}


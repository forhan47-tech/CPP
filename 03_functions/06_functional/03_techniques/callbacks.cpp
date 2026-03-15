#include <iostream>
#include <functional>
using namespace std;

void operate(int x, int y, function<int(int,int)> func) {
    cout << "Result = " << func(x, y) << endl;
}

int add(int a, int b) { 
    return a + b; 
}

int mul(int a, int b) { 
    return a * b; 
}

int main() {
    operate(3, 4, add);
    operate(3, 4, mul);
    return 0;
}

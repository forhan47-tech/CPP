#include <iostream>
using namespace std;

int add(int a, int b) { 
    return a + b; 
}

int sub(int a, int b) { 
    return a - b; 
}

int mul(int a, int b) { 
    return a * b; 
}

int main() {
    int (*ops[3])(int, int) = {add, sub, mul};

    cout << "Add: " << ops[0](10, 5) << endl;    
    cout << "Sub: " << ops[1](10, 5) << endl;
    cout << "Mul: " << ops[2](10, 5) << endl; 

    return 0;
}

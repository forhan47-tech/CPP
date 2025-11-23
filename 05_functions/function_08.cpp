#include <iostream>
using namespace std;

// Default assigned from right to left
void func(int a, int b = 10) {
    cout << "a = " << a << ", b = " << b << endl;
}

// void func(int a = 10, int b);  // Not allowed

int main() {
    func(5);       
    func(5, 20);    
    return 0;
}

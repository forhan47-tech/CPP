#include <iostream>
using namespace std;

// ✅ Valid: Default assigned from right to left
void func(int a, int b = 10) {
    cout << "a = " << a << ", b = " << b << endl;
}

/*
❌ Invalid: Default assigned from left to right
void func(int a = 10, int b);  // Not allowed
*/

int main() {
    func(5);        // Uses default b = 10
    func(5, 20);    // Uses provided b = 20
    return 0;
}

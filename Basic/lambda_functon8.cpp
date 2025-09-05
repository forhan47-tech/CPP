#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    auto lambda = [&]() {
        a += 2;  // modifies outer a directly
        b *= 3;  // modifies outer b directly
    };

    lambda();  // invoke the lambda

    cout << a << ", " << b << endl;  // Output: 7, 30

    return 0;
}

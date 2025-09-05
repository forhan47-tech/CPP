#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;

    auto lambda = [=]() {
        cout << "Sum: " << a + b << endl;
    };

    a = 100;  // This change has no effect inside the lambda

    lambda();  // Output: Sum: 12

    cout << "Outside lambda, a: " << a << endl;  // Output: 100

    return 0;
}

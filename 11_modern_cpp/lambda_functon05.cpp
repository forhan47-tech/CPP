#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;

    auto lambda = [=]() {
        cout << "Sum: " << a + b << endl;
    };

    a = 10;  
    lambda(); // Print 12 

    cout << "Outside lambda, a: " << a << endl; 
    return 0;
}

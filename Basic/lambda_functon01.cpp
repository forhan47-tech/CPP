#include <iostream>
using namespace std;

int main() {
    // Lambda expression with no parameter
    auto greet = []() { 
        cout << "Hello from Lambda!" << endl;
    };

    greet(); // function call

    return 0;
}

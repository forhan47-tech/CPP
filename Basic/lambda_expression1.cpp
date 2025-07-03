#include <iostream>
using namespace std;

int main() {
    // Basic lambda expression
    auto greet = []() {
        cout << "Hello from Lambda!" << endl;
    };

    // Calling the lambda
    greet();

    return 0;
}

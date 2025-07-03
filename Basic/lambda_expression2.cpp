#include <iostream>
using namespace std;

int main() {
    // Lambda expression with parameters
    auto add = [](int a, int b) {
        return a + b;
    };

    // Call the lambda with arguments
    int result = add(5, 7);
    cout << "Sum: " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(3, 4) << "\n";
    return 0;
}

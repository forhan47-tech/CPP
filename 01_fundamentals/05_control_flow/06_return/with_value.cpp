#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b; // returns sum
}

int main() {
    int result = add(5, 3);
    cout << "Result: " << result << endl;
    return 0;
}

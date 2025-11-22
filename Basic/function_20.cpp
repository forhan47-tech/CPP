#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b; // Return larger of two numbers
}

int main() {
    cout << "Max = " << max(10, 20) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int classify(int score) {
    if (score >= 90) return 1;   // Excellent
    if (score >= 60) return 2;   // Pass
    return 0;                    // Fail
}

int main() {
    cout << "Result code: " << classify(75) << endl;
    return 0;
}

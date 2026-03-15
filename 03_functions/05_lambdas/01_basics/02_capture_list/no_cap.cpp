#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto noCapture = [](int x, int y) {
        return x + y; // only uses parameters
    };

    cout << "Result = " << noCapture(a, b) << endl; 
}

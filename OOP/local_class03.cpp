#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    class Checker {
    public:
        bool isEven(int n) {
            return n % 2 == 0;
        }
    };

    Checker c;
    cout << num << " is " << (c.isEven(num) ? "Even" : "Odd") << endl;
}

int main() {
    checkEvenOdd(7); 
    checkEvenOdd(12); 
    return 0;
}

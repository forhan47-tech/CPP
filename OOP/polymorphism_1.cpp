#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math calc,
    cout << calc.add(2, 3) << endl;       // 5
    cout << calc.add(2.5, 3.7) << endl;   // 6.2
    return 0;
}

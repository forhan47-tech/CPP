#include <iostream>
using namespace std;

void calculate(int val) {
    class Square {
    public:
        int find(int n) {
            return n * n;
        }
    };

    Square s;
    cout << "Square of " << val << " is " << s.find(val) << endl;
}

int main() {
    calculate(5);
    calculate(10);
    return 0;
}

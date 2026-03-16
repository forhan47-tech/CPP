#include <iostream>
using namespace std;

void test() {
    static int count = 0;  // static variable

    class Helper {   // Local class
    public:
        void increment(int& c) {
            c++;
            cout << "Counter: " << c << endl;
        }
    };

    Helper h;
    h.increment(count);
}

int main() {
    test();
    test();
}

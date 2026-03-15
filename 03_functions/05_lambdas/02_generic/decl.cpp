#include <iostream>
using namespace std;

int main() {
    auto add = [](auto a, auto b) {
        return a + b;
    };

    cout << add(3, 4) << endl;       // int
    cout << add(2.5, 4.1) << endl;   // double
}

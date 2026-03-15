#include <iostream>
using namespace std;

int main() {
    auto add = [](int x, int y) {
        return x + y;
    };

    cout << "Sum = " << add(3, 4) << endl; 
}

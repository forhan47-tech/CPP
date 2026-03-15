#include <iostream>
using namespace std;

int main() {
    auto multiply = [](int x, int y = 2) {
        return x * y;
    };

    cout << multiply(5) << endl;   
    cout << multiply(5, 3) << endl; 
}

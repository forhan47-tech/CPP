#include <iostream>
using namespace std;

int main() {
    int x = (5, 10); // evaluates 5 then 10, result = 10
    cout << "x: " << x << endl;

    int y = 0;
    y = (y + 1, y + 2, y + 3); // final result is y+3
    cout << "y: " << y << endl;
    return 0;
}

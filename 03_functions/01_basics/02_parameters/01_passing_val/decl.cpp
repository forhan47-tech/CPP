#include <iostream>
using namespace std;

void increment(int x) {
    x++;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 5;
    increment(a);
    cout << "Outside function: " << a << endl;
}

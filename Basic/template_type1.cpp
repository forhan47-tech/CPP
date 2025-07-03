#include <iostream>
using namespace std;

// Template function to swap values
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "Swapped Values: " << x << " " << y << endl;

    double a = 2.5, b = 4.8;  
    swapValues(a, b);
    cout << "Swapped Values: " << a << " " << b << endl;

    return 0;
}


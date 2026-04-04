#include <iostream>
using namespace std;

void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 7;
    swapValues(&x, &y);
    cout << "x = " << x << ", y = " << y << endl; 
}

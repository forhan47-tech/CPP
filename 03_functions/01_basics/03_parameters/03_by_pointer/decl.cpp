#include <iostream>
using namespace std;

void incrementPtr(int *x) {
    (*x)++;
    cout << "Inside function: " << *x << endl;
}

int main() {
    int a = 5;
    incrementPtr(&a);
    cout << "Outside function: " << a << endl;
}

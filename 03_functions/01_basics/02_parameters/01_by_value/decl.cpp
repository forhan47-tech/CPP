#include <iostream>
using namespace std;

void increment(int x) {
    x++; // modifies copy
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 10;
    increment(num);
    cout << "Outside function: " << num << endl; 
}

#include <iostream>
using namespace std;

void incrementRef(int &x) {
    x++;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 5;
    incrementRef(a);
    cout << "Outside function: " << a << endl; 
}

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b; // returns an int
}

int main() {
    int result = add(5, 7);
    cout << "Sum = " << result << endl; 
}

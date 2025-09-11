#include <iostream>
using namespace std;

// Inline function
inline int square(int x) { 
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;// Compiler may replace this with: 5 * 5;
    return 0;
}

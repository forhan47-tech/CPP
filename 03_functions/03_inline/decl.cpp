#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x; // code is substituted directly
}

int main() {
    cout << square(5) << endl; 
}

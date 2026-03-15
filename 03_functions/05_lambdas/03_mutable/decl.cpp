#include <iostream>
using namespace std;

int main() {
    int n = 10;

    auto f = [n]() mutable {
        n++; // ✅ Allowed because of mutable
        return n;
    };

    cout << f() << endl; 
    cout << n << endl;   // original n unchanged
}

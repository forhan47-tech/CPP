#include <iostream>
using namespace std;

int main() {
    int x = 5;
    const int& cr = x; // Can't modify through cr
    cout << "cr = " << cr << endl;
    return 0;
}

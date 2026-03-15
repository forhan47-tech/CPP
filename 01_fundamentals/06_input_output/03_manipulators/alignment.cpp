#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << 123 << endl;       // right-aligned
    cout << left << setw(10) << 123 << endl; // left-aligned
}

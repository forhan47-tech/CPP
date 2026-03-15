#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;
    cout << setfill('*') << setw(10) << num << endl; // ****42
}

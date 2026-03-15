#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << setprecision(4) << pi << endl; // 3.142
    cout << fixed << setprecision(2) << pi << endl; // 3.14
    cout << scientific << pi << endl; // 3.141593e+00
}

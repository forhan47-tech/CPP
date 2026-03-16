#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int& ref = x; // must initialize immediately

    cout << "x = " << x << endl;   
    cout << "ref = " << ref << endl;
}

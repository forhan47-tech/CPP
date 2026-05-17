#include <iostream>
using namespace std;

int main() {
    int x = 20;
    int& r = x; // must initialize immediately

    cout << "x = " << x << endl;   
    cout << "r = " << r << endl;
}

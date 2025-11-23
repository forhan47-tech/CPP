#include <iostream>
using namespace std;

int main() {
    int x = 100;
    {
        int x = 200; // Shadows outer x
        cout << "Inner x = " << x << endl;
    }
    cout << "Outer x = " << x << endl;
    return 0;
}

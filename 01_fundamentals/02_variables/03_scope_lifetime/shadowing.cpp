#include <iostream>
using namespace std;

int main() {
    int z = 100;
    {
        int z = 200; // Shadows outer z
        cout << "Inner z = " << z << endl;
    }
    cout << "Outer z = " << z << endl;
    return 0;
}
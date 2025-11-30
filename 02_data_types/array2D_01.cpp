#include <iostream>
using namespace std;

int main() {
    int mtx[2][3];               // Declaration: 2 rows, 3 columns

    mtx[0][1] = 10;              // Assign values individually
    mtx[1][2] = 20;

    // Accessing elements
    cout << "Element at [0][1] = " << mtx[0][1] << endl;
    cout << "Element at [1][2] = " << mtx[1][2] << endl;
    return 0;
}

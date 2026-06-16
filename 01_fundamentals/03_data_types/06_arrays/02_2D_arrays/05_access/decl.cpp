#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << mat[1][2] << endl; // Access -> (2nd row, 3rd column)

    mat[0][0] = 10; // Modify -> (1st row, 1st column)
    cout << mat[0][0] << endl;
}

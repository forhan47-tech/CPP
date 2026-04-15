#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << mat[1][2] << endl; // Access element in second row, third column

    mat[0][0] = 10; // Modify element
    cout << mat[0][0] << endl;
}

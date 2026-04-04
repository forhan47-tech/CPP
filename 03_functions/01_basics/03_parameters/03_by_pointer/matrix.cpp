#include <iostream>
using namespace std;

void printMatrix(int mat[][3], int rows) {   // columns must be fixed
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void modifyMatrix(int (*mat)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] += 2;   // modifies
        }
    }
}

int main() {
    int mat[2][3] = { {1,2,3}, {4,5,6} };
    printMatrix(mat, 2);
    modifyMatrix(mat, 2);   // pass address of first row
    printMatrix(mat, 2);
}

#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int** mat = new int*[rows]; // array of pointers

    for (int i = 0; i < rows; i++) {
        mat[i] = new int[cols]; // each row is an array
    }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = i + j;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++) delete[] mat[i];
    delete[] mat;
}

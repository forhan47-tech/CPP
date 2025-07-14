#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

int main() {
    Matrix2d mat1;
    Matrix2d mat2;
    mat1 << 1, 2,
            3, 4;
    mat2 << 5, 6,
            7, 8;

    Matrix2d result = mat1 + mat2;
    cout << "Result:\n" << result << endl;
    return 0;
}

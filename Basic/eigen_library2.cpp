#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    MatrixXd A(2, 2);
    A << 1, 2,
         3, 4;

    MatrixXd T = A.transpose(); // Transpose
    MatrixXd I = A.inverse(); // Inverse (if non-singular)
    MatrixXd D = A.determinant(); // Determinant

    cout << "Transpose of A:\n" << T << endl;
    cout << "Inverse of A:\n" << I << endl;
    cout << "Determinant of A: " << D << endl;

    return 0;
}

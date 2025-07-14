#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    MatrixXd A(2, 2);
    A << 1, 2,
         3, 4;

    MatrixXd B(2, 2);
    B << 5, 6,
         7, 8;

    MatrixXd C = A + B; // Matrix addition
    MatrixXd G = A - B; // Matrix subtraction
    MatrixXd D = A * B; // Matrix multiplication
    MatrixXd S = 2 * A; // Scalar multiplication

    cout << "Matrix A:\n" << A << endl;
    cout << "Matrix B:\n" << B << endl;
    cout << "Sum (A + B):\n" << C << endl;
    cout << "Product (A * B):\n" << D << endl;
    cout << "Difference (A - B):\n" << G << endl;
    cout << "Scalar multiplication (2 * A):\n" << S << endl;

    return 0;
}

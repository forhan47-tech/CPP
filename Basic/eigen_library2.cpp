#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    MatrixXd A(2, 2);
    A << 1, 2,
         3, 4;

    MatrixXd T = A.transpose(); // Transpose
    MatrixXd Inv = A.inverse(); // Inverse (if non-singular)

    cout << "Transpose of A:\n" << T << endl;
    cout << "Inverse of A:\n" << Inv << endl;

    return 0;
}

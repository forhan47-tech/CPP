#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    // Create a 3x3 matrix
    Matrix3d M;
    M << 1, 2, 3,
         0, 1, 4,
         5, 6, 0;

    // Transpose of M
    Matrix3d transposed = M.transpose();

    // Inverse of M
    Matrix3d inverted = M.inverse();

    // Determinant of M
    double det = M.determinant();

    // Display results
    cout << "Matrix M:\n" << M << "\n\n";
    cout << "Transposed Matrix:\n" << transposed << "\n\n";
    cout << "Inverse Matrix:\n" << inverted << "\n\n";
    cout << "Determinant of M: " << det << "\n";

    return 0;
}

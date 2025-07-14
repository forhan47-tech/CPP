#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    // Define two 2x2 matrices
    Matrix2d M1, M2;

    M1 << 1, 2,
          3, 4;

    M2 << 5, 6,
          7, 8;

    // Perform operations
    Matrix2d sum    = M1 + M2;
    Matrix2d diff   = M1 - M2;
    Matrix2d prod   = M1 * M2;
    Matrix2d scaled = M1 * 2.5;

    // Print results
    cout << "Matrix M1:\n" << M1 << "\n\n";
    cout << "Matrix M2:\n" << M2 << "\n\n";
    cout << "Sum:\n" << sum << "\n\n";
    cout << "Difference:\n" << diff << "\n\n";
    cout << "Product:\n" << prod << "\n\n";
    cout << "Scaled (M1 * 2.5):\n" << scaled << "\n\n";

    return 0;
}

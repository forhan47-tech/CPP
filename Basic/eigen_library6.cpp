#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

int main() {
    // Define two 3D vectors
    Vector3d v1(1, 2, 3);
    Vector3d v2(4, 5, 6);

    // Compute dot product
    double dot = v1.dot(v2);         // = 1×4 + 2×5 + 3×6 = 32

    // Compute cross product
    Vector3d cross = v1.cross(v2);   // = (-3, 6, -3)

    // Display results
    cout << "v1: " << v1.transpose() << endl;
    cout << "v2: " << v2.transpose() << endl;
    cout << "Dot product: " << dot << endl;
    cout << "Cross product: " << cross.transpose() << endl;

    return 0;
}

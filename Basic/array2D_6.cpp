#include <iostream>
#include <array>

using namespace std;

int main() {
    // Declare a 3x3 2D array
    array<array<int, 3>, 3> matrix = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    out << "Element at row 1, column 2: " << matrix[1][2] << endl;

    matrix[1][2] = 30; // Modify
    cout << "Element at row 1, column 2: " << matrix[1][2] << endl;


    return 0;
}

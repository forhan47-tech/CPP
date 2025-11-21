#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 3>, 3> matrix = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    cout << "Element at row 1, column 2: " << matrix[1][2] << endl;

    matrix[1][2] = 30; // Modify element
    cout << "Element at row 1, column 2: " << matrix[1][2] << endl;
    return 0;
}

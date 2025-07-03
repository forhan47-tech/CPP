#include <iostream>
#include <array>

using namespace std;

int main() {
    array<array<int, 3>, 3> matrix; // 3x3 fixed-size 2D array

    cout << "Enter 9 numbers (row-wise): ";
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            cin >> matrix[i][j]; // Input using index
        }
    }

    cout << "Stored Matrix:" << endl;
    for (const auto &row : matrix) {
        for (const auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

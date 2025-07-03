#include <iostream>
#include <array>

using namespace std;

int main() {
    array<array<int, 3>, 3> matrix; // 3x3 fixed-size 2D array

    cout << "Enter 9 numbers (row-wise): ";
    for (auto &row : matrix) {
        for (auto &num : row) {
            cin >> num; // Direct input without indexing
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

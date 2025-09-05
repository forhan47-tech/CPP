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

    // Print the 2D array
    for (const auto &row : matrix) {
        for (const auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

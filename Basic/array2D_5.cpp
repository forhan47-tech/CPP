#include <iostream>
#include <array>

using namespace std;

int main() {
    array<array<int, 3>, 3> matrix = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    // Modify each element by adding 5
    for (auto &row : matrix) {
        for (auto &num : row) {
            num += 5;
        }
    }

    cout << "Modified Matrix:" << endl;
    for (const auto &row : matrix) {
        for (const auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

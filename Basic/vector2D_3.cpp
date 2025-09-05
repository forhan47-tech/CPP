#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix(3, vector<int>(4));  // Create a 2D vector

    cout << "Enter elements:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];  // Store input in the 2D vector
        }
    }

    cout << "Matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5}, {6, 7, 8, 9} };

    cout << "Matrix Elements:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


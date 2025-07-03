#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix;
    
    for (int i = 0; i < 3; i++) {
        vector<int> row;
        
        cout << "Enter 4 elements for row " << i + 1 << ": ";
        int num;
        for (int j = 0; j < 4; j++) {
            cin >> num;
            row.push_back(num);
        }

        matrix.push_back(row);
    }

    cout << "Matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }

    return 0;
}

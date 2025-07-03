#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix(3, vector<int>(4));

    cout << "Enter matrix elements:\n";
    for (auto& row : matrix)
        for (auto& element : row)
            cin >> element;

    cout << "\nStored Matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    
    return 0;
}


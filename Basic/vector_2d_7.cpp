#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<vector<int>> matrix;
    string input;
    int num;

    cout << "Enter rows of numbers separated by spaces (type 'end' to stop):\n";
    while (getline(cin, input) && input != "end") {
        vector<int> row;
        stringstream ss(input);
        while (ss >> num) {
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

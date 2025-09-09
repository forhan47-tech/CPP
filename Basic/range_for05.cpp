#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto& row : matrix) {  // Iterates over rows
        for (auto& element : row) {  // Iterates over elements in row
            element += 1;  
        }
    }

    cout << "2D Vector Elements:\n";
    for (const auto& row : matrix) { 
        for (const auto& element : row) { 
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}


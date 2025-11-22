#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto& row : mat) {  // Iterates over rows
        for (auto& e : row) {  // Iterates over elements in row
            e += 1;  
        }
    }

    cout << "2D Vector Elements:\n";
    for (const auto& row : mat) { 
        for (const auto& col : row) { 
            cout << col << " ";
        }
        cout << endl;
    }
    
    return 0;
}


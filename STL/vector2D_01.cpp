#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

    cout << "Matrix 1:\n";
    for (const auto& row : mat1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    } 
    return 0;
}


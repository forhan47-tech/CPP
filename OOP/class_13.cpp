#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int>> grid;

public:
    Matrix(int rows, int cols) {
        grid.resize(rows, vector<int>(cols, 0));
    }

    void set(int r, int c, int val) {
        grid[r][c] = val;
    }

    void print() const {
        for (const auto& row : grid) {
            for (int val : row) cout << val << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix mat(3, 4); // Create a 3x4 matrix

    mat.set(0, 0, 5);
    mat.set(1, 2, 8);
    mat.set(2, 3, 3);

    mat.print();  
    return 0;
}

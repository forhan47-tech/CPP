#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    for (int i = 0; i < row; i++)
        if (board[i][col]) return false;
    for (int i=row-1, j=col-1; i>=0 && j>=0; i--, j--)
        if (board[i][j]) return false;
    for (int i=row-1, j=col+1; i>=0 && j<n; i--, j++)
        if (board[i][j]) return false;
    return true;
}

void solve(vector<vector<int>>& board, int row, int n) {
    if (row == n) {
        for (auto& r : board) {
            for (int c : r) cout << (c ? "Q " : ". ");
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1; // place queen
            solve(board, row+1, n); // recurse
            board[row][col] = 0; // backtrack
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    solve(board, 0, n);
}

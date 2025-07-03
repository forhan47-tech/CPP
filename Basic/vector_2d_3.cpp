#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto row = matrix.begin(); row != matrix.end(); ++row) {
        for (auto col = row->begin(); col != row->end(); ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }

    return 0;
}

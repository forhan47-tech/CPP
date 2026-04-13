#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = size(mat);
    int cols = size(mat[0]);

    cout << "Rows: " << rows << endl;
    cout << "Columns: " << cols << endl;
}

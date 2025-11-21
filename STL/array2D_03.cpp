#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 3>, 3> matrix = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    cout << "Number of rows: " << matrix.size() << endl;
    cout << "Number of columns in row 1: " << matrix[1].size() << endl;

    matrix.clear();  // Remove all elements
    cout << "Is array empty? " << (matrix.empty() ? "Yes" : "No") << endl;

    return 0;
}
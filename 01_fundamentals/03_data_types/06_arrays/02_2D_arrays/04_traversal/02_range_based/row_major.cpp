#include <iostream>
using namespace std;

int main() {
    int mat[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    cout << "Row-wise:\n";
    for (auto &row : mat) {         
        for (auto &val : row) {       
            cout << val << " ";
        }
        cout << endl;
    }
}

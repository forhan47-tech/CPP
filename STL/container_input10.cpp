#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 3>, 3> matrix; 

    cout << "Enter 9 numbers (row-wise): ";
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            cin >> matrix[i][j]; 
        }
    }

    cout << "Stored Matrix:" << endl;
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

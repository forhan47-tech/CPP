#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Modified Elements:\n";
    for (auto& row : arr) {  // Iterates over rows
        for (auto& element : row) {  // Iterates over elements in row
            element += 1;  // Increment each element by 1
        }
    }

    cout << "2D Array Elements:\n";
    for (const auto& row : arr) {  // Iterates over rows
        for (const auto& element : row) {  // Iterates over elements in row
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto& row : arr) {  // Iterates over rows
        for (auto& e : row) {  // Iterates over elements in row
            e += 1;
        }
    }

    cout << "2D Array Elements:\n";
    for (const auto& row : arr) { 
        for (const auto& col : row) {  
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    size_t rows = sizeof(arr) / sizeof(arr[0]);
    size_t cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "2D Array:" << endl;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }

    return 0;
}

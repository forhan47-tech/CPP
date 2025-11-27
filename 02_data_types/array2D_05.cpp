#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    size_t rows = sizeof(arr) / sizeof(arr[0]);
    size_t cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "2D Array in reverse order:" << endl;
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

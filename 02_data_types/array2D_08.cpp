#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    // Pointer to an array of 3 ints (row pointer)
    int (*ptr)[3] = arr;

    // Modify element in second row, third column
    ptr[1][2] = 4;
    cout << ptr[1][2] << endl;

    // Print the entire 2D array using pointer access
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

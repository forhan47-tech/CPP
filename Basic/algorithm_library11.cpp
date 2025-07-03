#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values = {5, 2, 9, 1, 5, 6};

    // Reverse the entire vector
    reverse(values.begin(), values.end());
    cout << "Reversed: ";
    for (int num : values)
        cout << num << " ";
    cout << endl;

    // Rotate the vector left by 2 positions
    rotate(values.begin(), values.begin() + 2, values.end());
    cout << "Rotated: ";
    for (int num : values)
        cout << num << " ";
    cout << endl;

    return 0;
}

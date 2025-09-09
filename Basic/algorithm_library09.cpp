#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {5, 2, 9, 1, 5, 6};

    // Reverse the entire vector
    reverse(v1.begin(), v1.end());

    cout << "Reversed: ";
    for (int num : v1)
        cout << num << " ";
    cout << endl;

    // Rotate the vector left by 2 positions
    rotate(v1.begin(), v1.begin() + 2, v1.end());

    cout << "Rotated: ";
    for (int num : v1)
        cout << num << " ";
    cout << endl;

    return 0;
}

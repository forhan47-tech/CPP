#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 20, 30, 40};

    // Replace all occurrences of 20 with 99
    replace(v1.begin(), v1.end(), 20, 99);

    cout << "Modified Vector after replace: ";
    for (int val : v1)
        cout << val << " ";
    cout << endl;

    // Replace elements greater than 30 with 100
    replace_if(v1.begin(), v1.end(), [](int x) { return x > 30; }, 100);

    cout << "Modified Vector after replace_if: ";
    for (int val : v1)
        cout << val << " ";
    cout << endl;

    return 0;
}

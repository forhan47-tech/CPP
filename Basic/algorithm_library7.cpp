#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values = {10, 20, 20, 30, 40};

    // Replace all occurrences of 20 with 99
    replace(values.begin(), values.end(), 20, 99);

    cout << "Modified Vector after replace: ";
    for (int value : values)
        cout << value << " ";
    cout << endl;

    // Replace elements greater than 30 with 100
    replace_if(values.begin(), values.end(), [](int x) {
        return x > 30;
    }, 100);

    cout << "Modified Vector after replace_if: ";
    for (int value : values)
        cout << value << " ";
    cout << endl;

    return 0;
}

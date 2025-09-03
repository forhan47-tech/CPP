#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {10, 5, 8, 1, 7, 3};

    // Make a copy for the 3rd smallest element
    vector<int> s1 = v1;
    nth_element(s1.begin(), s1.begin() + 2, s1.end());
    cout << "3rd smallest element: " << s1[2] << endl;

    // Make a copy for the 3rd largest element
    vector<int> l1 = v1;
    nth_element(l1.begin(), l1.begin() + 2, l1.end(), greater<int>());
    cout << "3rd largest element: " << l1[2] << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 2, 5};

    // Sort ascending
    sort(v.begin(), v.end());
    cout << "Ascending: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Check if sorted ascending
    cout << "Is ascending? " << boolalpha << is_sorted(v.begin(), v.end()) << endl;

    // Sort descending
    sort(v.begin(), v.end(), greater<int>());
    cout << "Descending: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Check if sorted descending
    cout << "Is descending? " << boolalpha << is_sorted(v.begin(), v.end(), greater<int>()) << endl;

    return 0;
}

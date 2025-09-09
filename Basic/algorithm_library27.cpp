
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // Get the next lexicographical permutation
    next_permutation(v.begin(), v.end());

    cout << "Next permutation: ";
    for (int n : v)
        cout << n << " ";
    cout << endl;

    // Reset vector to original order
    v = {1, 2, 3};

    // Get the previous lexicographical permutation
    prev_permutation(v.begin(), v.end());
    
    cout << "Previous permutation: ";
    for (int n : v)
        cout << n << " ";
    cout << endl;

    return 0;
}


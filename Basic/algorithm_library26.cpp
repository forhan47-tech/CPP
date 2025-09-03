#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {3, 1, 2};

    // Check if v1 and v2 are permutations of each other
    cout << "v1 is a permutation of v2? "
         << (is_permutation(v1.begin(), v1.end(), v2.begin()) ? "Yes" : "No") << endl;

    cout << "v2 is a permutation of v1? "
         << (is_permutation(v2.begin(), v2.end(), v1.begin()) ? "Yes" : "No") << endl;

    // Check if each vector is a permutation of itself
    cout << "v1 is a permutation of itself? "
         << (is_permutation(v1.begin(), v1.end(), v1.begin()) ? "Yes" : "No") << endl;

    cout << "v2 is a permutation of itself? "
         << (is_permutation(v2.begin(), v2.end(), v2.begin()) ? "Yes" : "No") << endl;

    return 0;
}

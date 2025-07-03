#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3}, v2 = {1, 2, 3};

    // Check if the vectors are equal
    if (equal(v1.begin(), v1.end(), v2.begin())) {
        cout << "Vectors are equal!" << endl;
    } else {
        cout << "Vectors are different!" << endl;
    }

    // Find the first mismatch, if any
    auto result = mismatch(v1.begin(), v1.end(), v2.begin());

    if (result.first != v1.end()) {
        cout << "First mismatch at position: " 
             << distance(v1.begin(), result.first) << endl;
        cout << "v1: " << *result.first << ", v2: " << *result.second << endl;
    } else {
        cout << "No mismatch found." << endl;
    }

    return 0;
}

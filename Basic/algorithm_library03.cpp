#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {1, 2, 0, 4, 5};

    // Check if both ranges are equal
    bool areEqual = equal(A.begin(), A.end(), B.begin());
    cout << "Are equal: " << boolalpha << areEqual << "\n";

    // Find first mismatch
    auto [itA, itB] = mismatch(A.begin(), A.end(), B.begin());
    if (itA != A.end() && itB != B.end()) {
        cout << "Mismatch at A: " << *itA << ", B: " << *itB << "\n";
    } else {
        cout << "No mismatch found\n";
    }

    return 0;
}

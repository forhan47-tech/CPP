#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A = {1, 3, 5, 7, 9};
    vector<int> B = {3, 4, 5, 6, 7};

    // Sort both ranges
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Prepare result containers
    vector<int> diffResult(A.size());
    vector<int> symDiffResult(A.size() + B.size());

    // Set difference: A - B
    auto itD = set_difference(A.begin(), A.end(), B.begin(), B.end(), diffResult.begin());
    diffResult.resize(itD - diffResult.begin());

    // Set symmetric difference: (A - B) ∪ (B - A)
    auto itS = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), symDiffResult.begin());
    symDiffResult.resize(itS - symDiffResult.begin());

    // Output results
    cout << "Set Difference (A - B): ";
    for (int x : diffResult) cout << x << " ";
    cout << "\n";

    cout << "Symmetric Difference: ";
    for (int x : symDiffResult) cout << x << " ";
    cout << "\n";

    return 0;
}

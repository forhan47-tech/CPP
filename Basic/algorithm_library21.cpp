#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A = {1, 3, 5, 7, 9};
    vector<int> B = {3, 4, 5, 6, 7};
    
    // Ensure both ranges are sorted
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Prepare result containers
    vector<int> unionResult(A.size() + B.size());
    vector<int> intersectionResult(min(A.size(), B.size()));

    // Set union
    auto itU = set_union(A.begin(), A.end(), B.begin(), B.end(), unionResult.begin());
    unionResult.resize(itU - unionResult.begin());

    // Set intersection
    auto itI = set_intersection(A.begin(), A.end(), B.begin(), B.end(), intersectionResult.begin());
    intersectionResult.resize(itI - intersectionResult.begin());

    // Output results
    cout << "Union: ";
    for (int x : unionResult) cout << x << " ";
    cout << "\n";

    cout << "Intersection: ";
    for (int x : intersectionResult) cout << x << " ";
    cout << "\n";

    return 0;
}

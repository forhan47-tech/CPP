#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> setA = {1, 3, 5};
    vector<int> setB = {2, 3, 4};

    // Ensure both sets are sorted
    sort(setA.begin(), setA.end());
    sort(setB.begin(), setB.end());

    // Union
    vector<int> unionResult(setA.size() + setB.size());
    auto unionEnd = set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), unionResult.begin());
    unionResult.resize(distance(unionResult.begin(), unionEnd));
    cout << "Union Set: ";
    for (int num : unionResult) cout << num << " ";
    cout << endl;

    // Intersection
    vector<int> intersectionResult(min(setA.size(), setB.size()));
    auto intersectionEnd = set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(), intersectionResult.begin());
    intersectionResult.resize(distance(intersectionResult.begin(), intersectionEnd));
    cout << "Intersection Set: ";
    for (int num : intersectionResult) cout << num << " ";
    cout << endl;

    // Difference
    vector<int> differenceResult(setA.size());
    auto differenceEnd = set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), differenceResult.begin());
    differenceResult.resize(distance(differenceResult.begin(), differenceEnd));
    cout << "Difference Set: ";
    for (int num : differenceResult) cout << num << " ";
    cout << endl;

    // Symmetric Difference
    vector<int> symmetricResult(setA.size() + setB.size());
    auto symmetricEnd = set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), symmetricResult.begin());
    symmetricResult.resize(distance(symmetricResult.begin(), symmetricEnd));
    cout << "Symmetric Difference Set: ";
    for (int num : symmetricResult) cout << num << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5};
    vector<int> v2 = {2, 4, 6};

    // Ensure both vectors are sorted before merging
    vector<int> merged(v1.size() + v2.size());

    // Merged the two sorted vectors v1 and v2 into merged
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());

    cout << "Merged: ";
    for (int n : merged) 
        cout << n << " ";
    cout << endl;

    return 0;
}


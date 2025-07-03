#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());

    partial_sum(v.begin(), v.end(), result.begin());

    cout << "Partial Sum: ";
    for (int n : result) cout << n << " ";  // Output: 1 3 6 10 15
    cout << endl;

    return 0;
}


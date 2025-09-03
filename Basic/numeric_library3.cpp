#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> result(v.size());

    // Calculate partial sums
    partial_sum(v.begin(), v.end(), result.begin());

    cout << "Partial Sum: ";
    for (int n : result) cout << n << " ";  // Output: 1 3 6 10 15
    cout << endl;

    // Calculate partial products
    partial_sum(v.begin(), v.end(), result.begin(), multiplies<int>());
    
    cout << "Partial Product: ";
    for (int n : result) cout << n << " ";  // Output: 1 2 6 24 120
    cout << endl;

    return 0;
}


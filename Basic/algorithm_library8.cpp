#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> source = {10, 15, 20, 25, 30};
    vector<int> allCopy(source.size());       // for std::copy
    vector<int> filteredCopy;                 // for std::copy_if

    // std::copy — copy all elements
    copy(source.begin(), source.end(), allCopy.begin());

    // std::copy_if — copy only elements divisible by 10
    copy_if(source.begin(), source.end(), back_inserter(filteredCopy),
            [](int x) { return x % 10 == 0; });

    // Output results
    cout << "All elements copied: ";
    for (int x : allCopy) cout << x << " ";
    cout << endl;

    cout << "Filtered elements (divisible by 10): ";
    for (int x : filteredCopy) cout << x << " ";
    cout << endl;

    return 0;
}

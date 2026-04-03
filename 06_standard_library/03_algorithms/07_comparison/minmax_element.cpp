#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 5, 30, 2};
    auto result = minmax_element(v.begin(), v.end());
    cout << "Smallest: " << *result.first << ", Largest: " << *result.second << endl;
}

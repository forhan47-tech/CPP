#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it = distance(v.begin(), v.end());
    cout << "Distance between iterators: " << it << endl;

    return 0;
}


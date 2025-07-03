#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it1 = next(v.begin(), 2);  // Move forward by 2 positions
    cout << "Next position: " << *it1 << endl;

    auto it2 = prev(v.end(), 2);  // Move backward by 2 positions
    cout << "Previous position: " << *it2 << endl;

    return 0;
}

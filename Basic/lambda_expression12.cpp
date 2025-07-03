#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Count even numbers using a lambda with count_if
    int evenCount = count_if(v.begin(), v.end(), [](int n) {
        return n % 2 == 0;
    });

    cout << "Even numbers count: " << evenCount << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    // Double each element using std::transform with a lambda
    transform(v.begin(), v.end(), v.begin(), [](int x) { return x + 2; });

    // Print the transformed vector
    for (int num : v)
        cout << num << " ";
    cout << endl;

    return 0;
}

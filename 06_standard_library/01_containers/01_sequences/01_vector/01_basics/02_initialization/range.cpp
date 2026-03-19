#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(v1.begin(), v1.begin() + 3); // first 3 elements

    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    return 0;
}

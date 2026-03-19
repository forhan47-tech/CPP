#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2(v1);   // copy of v1

    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    return 0;
}

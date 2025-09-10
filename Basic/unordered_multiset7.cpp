#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums1 = {1, 2};
    unordered_multiset<int> ums2 = {3, 4};

    ums1.swap(ums2);

    cout << "Swapped multiset a: ";
    for (int val : ums1)
        cout << val << " ";
    cout << endl;
    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {1, 2};
    multiset<int> ms2 = {3, 4};

    ms1.swap(ms2);

    cout << "Swapped multiset a: ";
    for (int val : ms1)
        cout << val << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        ms.insert(num);  // Insert elements into the multiset
    }

    cout << "Multiset elements: ";
    for (int num : ms) cout << num << " ";

    return 0;
}

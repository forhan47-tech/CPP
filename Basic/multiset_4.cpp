#include <iostream>
#include <set>

using namespace std;

int main() {
    multiset<int> ms;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        ms.insert(num);
    }

    cout << "Multiset elements: ";
    for (int num : ms) cout << num << " ";

    return 0;
}

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> us;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        us.insert(num);
    }

    cout << "Unordered set elements: ";
    for (int num : us) cout << num << " ";

    return 0;
}

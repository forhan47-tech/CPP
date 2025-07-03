#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> us;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        us.insert(num);  // Insert elements into the unordered set
    }

    cout << "Unordered set elements: ";
    for (int num : us) cout << num << " ";

    return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        mySet.insert(num);  // Insert elements into the set
    }

    cout << "Set elements: ";
    for (int num : mySet) cout << num << " ";

    return 0;
}

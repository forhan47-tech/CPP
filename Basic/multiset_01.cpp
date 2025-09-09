#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {10, 20, 30, 30, 40, 50};

    multiset<int, greater<int>> ms2 = {10, 20, 30, 30, 40, 50}; 
 
    cout << "Multiset 1: ";
    for (int num : ms1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Multiset 2: ";
    for (int num : ms2) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

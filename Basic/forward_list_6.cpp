#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl;
    int num;

    auto it = fl.before_begin();  // Iterator before the first element

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        it = fl.insert_after(it, num);  // Insert after the last inserted element
    }

    cout << "Forward list elements: ";
    for (int num : fl) cout << num << " ";

    return 0;
}

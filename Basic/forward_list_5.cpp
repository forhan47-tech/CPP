#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        fl.push_front(num);
    }

    cout << "Forward list elements: ";
    for (int num : fl) cout << num << " ";

    return 0;
}

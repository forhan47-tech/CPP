#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl;

    cout << "Enter number of elements: ";
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        fl.push_front(num);  // Insert elements at the front
    }

    cout << "Forward list elements: ";
    for (int num : fl) cout << num << " ";

    return 0;
}

#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        myList.push_front(num);  // Insert elements at the front
    }

    cout << "List elements: ";
    for (int num : myList) cout << num << " ";

    return 0;
}

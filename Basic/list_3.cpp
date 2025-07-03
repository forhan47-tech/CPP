#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        myList.push_back(num);  // Insert elements at the end
    }

    cout << "List elements: ";
    for (int num : myList) cout << num << " ";

    return 0;
}

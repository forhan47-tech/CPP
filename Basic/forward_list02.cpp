#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl1 = {10, 20, 30, 40, 50};

    forward_list<int> fl2(5, 0); // all set to 0

    cout << "Forward list1: ";
    for (int num : fl1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Forward list2: ";
    for (int num : fl2) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {40, 10, 30, 20};

    fl.sort();  // Sorts the list in ascending order

    cout << "Sorted list: ";
    for (int num : fl) cout << num << " ";

    return 0;
}

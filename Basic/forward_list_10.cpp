#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 40};

    fl.reverse();  // Reverses the list

    cout << "Reversed list: ";
    for (int num : fl) cout << num << " ";

    return 0;
}



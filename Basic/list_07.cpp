#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40};

    lst.reverse();  // Reverse the list

    cout << "Reversed list: ";
    for (int num : lst) cout << num << " ";

    return 0;
}

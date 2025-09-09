#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl1 = {10, 20, 30};
    forward_list<int> fl2 = {40, 50, 60};

    auto it = fl1.begin();
    fl1.splice_after(it, fl2);  // Moves all elements of fl2 after the first element of fl1

    cout << "After splice_after: ";
    for (int num : fl1) cout << num << " ";

    return 0;
}


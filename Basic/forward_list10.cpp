#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl1 = {10, 30, 50};
    forward_list<int> fl2 = {20, 40, 60};

    fl1.merge(fl2);  // Merges fl2 into fl1

    cout << "Merged list: ";
    for (int num : fl1) cout << num << " ";

    return 0;
}

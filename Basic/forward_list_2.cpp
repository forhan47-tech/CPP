#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30, 40, 50};

    for (auto it = fl.begin(); it != fl.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

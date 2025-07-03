#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

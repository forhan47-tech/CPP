#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    for (int num : myList) {
        cout << num << " ";
    }

    return 0;
}

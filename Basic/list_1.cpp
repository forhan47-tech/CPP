#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    // list<int> myList(5, 0); // Initializes a list with 5 elements, all set to 0 --- IGNORE ---

    for (int num : myList) {
        cout << num << " ";
    }

    return 0;
}

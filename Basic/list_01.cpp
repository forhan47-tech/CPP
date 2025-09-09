#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst1 = {10, 20, 30, 40, 50};

    list<int> lst2(5, 0); // all set to 0 

    cout << "List 1: ";
    for (int num : lst1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "List 2: ";
    for (int num : lst2) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

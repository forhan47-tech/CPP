#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;   // empty list

    lst.push_back(10);
    lst.push_back(20);

    for (int x : lst) cout << x << " ";
}

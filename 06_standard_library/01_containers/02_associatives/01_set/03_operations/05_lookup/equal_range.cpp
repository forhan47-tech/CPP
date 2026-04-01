#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10,20,30,40};

    auto range = s.equal_range(30);
    if(range.first != range.second)
        cout << "Equal range of 30: " << *range.first << endl;
    else
        cout << "Key not found!" << endl;
}

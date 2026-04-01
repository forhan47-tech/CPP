#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10,20,20,30,40};

    auto range = ms.equal_range(20);
    cout << "Equal range of 20: ";
    for(auto it = range.first; it != range.second; ++it)
        cout << *it << " "; 
}

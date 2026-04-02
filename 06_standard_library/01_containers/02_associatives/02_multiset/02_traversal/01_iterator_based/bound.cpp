#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};

    auto lb = ms.lower_bound(20); 
    auto ub = ms.upper_bound(20);

    cout << "Range for 20: ";
    for(auto it = lb; it != ub; ++it)
        cout << *it << " "; 
}

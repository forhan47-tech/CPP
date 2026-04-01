#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10,20,20,30,40};

    auto ub = ms.upper_bound(20);
    cout << "Upper bound of 20: " << *ub << endl; 
}

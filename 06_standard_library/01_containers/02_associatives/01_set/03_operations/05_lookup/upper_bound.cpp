#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    auto ub = s.upper_bound(30);
    cout << "Upper bound of 30: " << *ub << endl; 
}

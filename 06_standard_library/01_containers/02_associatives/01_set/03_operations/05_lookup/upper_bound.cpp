#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    auto it = s.upper_bound(30);
    if (it != s.end())
        cout << "Upper bound of 30: " << *it << endl; 
    else
        cout << "No element > 30";
}

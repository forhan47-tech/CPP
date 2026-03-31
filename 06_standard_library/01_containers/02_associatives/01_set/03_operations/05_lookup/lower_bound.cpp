#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    auto it = s.lower_bound(25);
    if (it != s.end())
        cout << "Lower bound of 25: " << *it << endl; 
    else
        cout << "No element >= 25";
}

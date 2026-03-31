#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    auto range = s.equal_range(30);

    if (range.first != s.end())
        cout << "Lower bound: " << *range.first << endl;  
    if (range.second != s.end())
        cout << "Upper bound: " << *range.second << endl;
}

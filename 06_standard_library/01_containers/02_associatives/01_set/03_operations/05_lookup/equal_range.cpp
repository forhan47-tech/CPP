#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    auto range = s.equal_range(30);
    cout << "Equal range for 30: " << *range.first << " to " << *range.second << endl; 
}

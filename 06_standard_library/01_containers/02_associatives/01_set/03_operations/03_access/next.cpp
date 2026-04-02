#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    auto it = next(s.begin(), 3); // index 3
    cout << "Element: " << *it << endl; 
}

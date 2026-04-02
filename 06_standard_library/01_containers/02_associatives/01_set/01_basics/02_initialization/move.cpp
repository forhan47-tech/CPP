#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {10, 20, 30};
    set<int> s2(std::move(s1)); // move constructor
    for(int x : s2) cout << x << " "; // 10 20 30
    cout << "\nSize of s1 after move: " << s1.size() << endl; 
}

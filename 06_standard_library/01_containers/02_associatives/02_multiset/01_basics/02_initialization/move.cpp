#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {10, 20, 30};
    multiset<int> ms2(std::move(ms1)); // move constructor
    for(int x : ms2) cout << x << " "; // 10 20 30
    cout << "\nSize of ms1 after move: " << ms1.size() << endl; 
}

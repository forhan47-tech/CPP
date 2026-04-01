#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {1, 2, 2, 3};
    multiset<int> ms2(ms1);   // copy of ms1
    for (int x : ms2) cout << x << " "; 
}

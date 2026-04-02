#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {1, 2, 2};
    multiset<int> ms2 = {2, 3, 3};
    ms1.merge(ms2);
    for(int x : ms1) cout << x << " "; 
}

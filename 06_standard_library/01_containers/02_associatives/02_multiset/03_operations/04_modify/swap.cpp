#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms1 = {1, 2, 2};
    multiset<int> ms2 = {10, 20};

    ms1.swap(ms2);

    for (int x : ms1) cout << x << " "; 
}

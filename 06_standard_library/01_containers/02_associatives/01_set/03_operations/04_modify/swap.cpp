#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {10, 20};

    s1.swap(s2);

    for (int x : s1) cout << x << " "; 
}

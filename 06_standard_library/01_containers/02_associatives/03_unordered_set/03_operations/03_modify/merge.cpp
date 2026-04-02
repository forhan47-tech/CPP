#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us1 = {1, 2};
    unordered_set<int> us2 = {2, 3, 4};
    us1.merge(us2);

    for(int x : us1) cout << x << " "; 
}

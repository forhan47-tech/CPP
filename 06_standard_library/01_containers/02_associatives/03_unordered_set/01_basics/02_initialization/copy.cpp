#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us1 = {1,2,3};
    unordered_set<int> us2(us1); // copy of us1

    for(auto x : us2)
        cout << x << " ";
}

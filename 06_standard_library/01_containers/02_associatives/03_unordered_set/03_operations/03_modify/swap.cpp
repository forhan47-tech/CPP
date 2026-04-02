#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us1 = {1,2,3};
    unordered_set<int> us2 = {4,5,6};

    us1.swap(us2);
    
    for(auto x : us1) cout << x << " "; 
}

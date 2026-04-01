#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30, 40};
    auto it = next(ms.begin(), 3); // index 3
    cout << "Element at index 3: " << *it << endl; 
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.insert(v.begin() + 1, 10); // insert 10 at index 1

    cout << "Vector after insert: ";
    for (int x : v) cout << x << " "; 
    return 0;
}

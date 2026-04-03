#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,3,5};
    cout << (none_of(v.begin(), v.end(), [](int x){ return x%2==0; }) ? "No even" : "Has even") << endl;
}

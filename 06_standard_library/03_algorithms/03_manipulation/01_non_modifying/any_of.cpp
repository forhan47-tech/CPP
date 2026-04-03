#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,3,5,6};
    cout << (any_of(v.begin(), v.end(), [](int x){ return x%2==0; }) ? "Has even" : "No even") << endl;
}

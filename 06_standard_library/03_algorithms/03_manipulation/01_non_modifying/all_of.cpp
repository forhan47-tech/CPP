#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {2,4,6};
    cout << (all_of(v.begin(), v.end(), [](int x){ return x%2==0; }) ? "All even" : "Not all even") << endl;
}

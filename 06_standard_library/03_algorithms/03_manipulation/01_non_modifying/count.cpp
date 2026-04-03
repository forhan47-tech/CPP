#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,2,3,2};
    cout << count(v.begin(), v.end(), 2) << endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,3};
    cout << (equal(a.begin(), a.end(), b.begin()) ? "Equal" : "Not Equal") << endl; 
}

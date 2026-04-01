#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20};
    v.erase(v.begin() + 2);   // remove single element
    v.erase(v.begin(), v.begin() + 2);   // remove first two elements
    for (int x : v) cout << x << " "; 
}

#include <iostream>
#include <vector>
using namespace std;

void addElement(vector<int> &v, int val) { // reference
    v.push_back(val);
}

int main() {
    vector<int> vec = {1,2,3};
    addElement(vec, 4);
    for (int x : vec) cout << x << " "; 
}

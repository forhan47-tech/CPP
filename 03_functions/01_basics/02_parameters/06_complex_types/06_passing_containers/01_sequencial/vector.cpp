#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &v) { // const reference
    for (int x : v) cout << x << " ";
    cout << endl;
}

void addElement(vector<int> &v, int val) { // reference
    v.push_back(val);
}

int main() {
    vector<int> vec = {1, 2, 3};
    printVector(vec);
    addElement(vec, 4);
    printVector(vec); 
}

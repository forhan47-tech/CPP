#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &v) { // const reference
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {10,20,30};
    printVector(vec); // safe, efficient
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "Element at index 1: " << v[1] << endl;   // direct access(no bounds check)
    cout << "Element at index 2: " << v.at(2) << endl;   // safe access(throws exception)
}

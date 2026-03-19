#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << "Element at index 0: " << v[0] << endl; // using operator
    cout << "Element at index 2: " << v[2] << endl; 

    cout << "Element at index 1: " << v.at(1) << endl; // using .at()
    return 0;
}

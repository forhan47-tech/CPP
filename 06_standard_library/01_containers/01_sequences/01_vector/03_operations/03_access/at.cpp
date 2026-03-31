#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "Element at index 2: " << v.at(2) << endl; // safe access
}

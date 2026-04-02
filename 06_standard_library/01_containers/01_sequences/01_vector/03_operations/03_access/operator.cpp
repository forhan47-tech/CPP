#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "Element at index 1: " << v[1] << endl; 
    v[1] = 99; // modify
    cout << "Modified element at index 1: " << v[1] << endl; 
}

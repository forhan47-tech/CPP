#include <iostream>
#include <vector>
using namespace std;

vector<int> getValues() {
    return {1, 2, 3, 4, 5}; // return initializer list
}

int main() {
    vector<int> v = getValues();
    for (int x : v) cout << x << " "; 
}

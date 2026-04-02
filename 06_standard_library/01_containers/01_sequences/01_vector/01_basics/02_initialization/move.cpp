#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30};
    vector<int> v2(std::move(v1)); // move constructor
    for(int x : v2) cout << x << " "; 
    cout << "\nSize of v1 after move: " << v1.size() << endl; 
}

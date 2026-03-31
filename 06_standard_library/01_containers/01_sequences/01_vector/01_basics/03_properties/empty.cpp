#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << (v.empty() ? "Empty" : "Not Empty") << endl; 
    v.push_back(10);
    cout << (v.empty() ? "Empty" : "Not Empty") << endl;
}

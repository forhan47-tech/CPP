#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Is empty? " << (v.empty() ? "Yes" : "No") << endl;

    v.push_back(100);
    cout << "Is empty after push? " << (v.empty() ? "Yes" : "No") << endl;
}

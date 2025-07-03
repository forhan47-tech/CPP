#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}};

    cout << "Number of rows: " << v.size() << endl;
    cout << "Number of columns in row 1: " << v[1].size() << endl;

    v.clear();  // Remove all elements
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}

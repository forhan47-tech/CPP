#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}}; 

    v.push_back({7, 8, 9});  // Add a new row
    v.erase(v.begin()+1);  // Remove the second row

    v[1].push_back(30); // Push value in row 1

    v[1].insert(v[1].begin() + 1, 10);  // Insert value in row 1 at position 1
    v[1].erase(v[1].begin() + 1);  // Remove element at index 1 in row 1

    cout << "2D Vector elements:\n";
    for (auto& row : v) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

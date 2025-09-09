#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> v2 = {{7, 8, 9}, {10, 11, 12}};

    v1.swap(v2);  // Swap contents

    cout << "\nAfter swap:\n";
    for (auto& row : v1) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    return 0;
}

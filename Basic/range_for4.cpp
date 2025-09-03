#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    for (auto& num : v) {  // Reference allows modification
        num += 5;
    }

    cout << "Modified values: ";
    for (auto num : v) cout << num << " ";
    cout << endl;

    return 0;
}


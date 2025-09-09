#include <iostream>
#include <vector>
using namespace std;

void modifyVector(vector<int>& vec) { // Pass by reference
    vec.push_back(100);
}

int main() {
    vector<int> nums = {1, 2, 3};

    modifyVector(nums); // Passing address

    cout << "Modified vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

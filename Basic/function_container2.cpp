#include <iostream>
#include <vector>
using namespace std;

void modifyVector(vector<int>& vec) { // Pass by reference
    vec.push_back(100); // Adds element
}

int main() {
    vector<int> nums = {1, 2, 3};
    modifyVector(nums); // Original vector is changed
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}

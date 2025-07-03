#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> nums(5);

    // Fill all elements with the value 99
    fill(nums.begin(), nums.end(), 99);

    cout << "Filled Array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}


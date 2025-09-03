#include <iostream>
#include <vector>
#include <algorithm>  // For std::partition
using namespace std;

// Predicate function to check for even numbers
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    // Partition the vector so that even numbers appear first
    partition(nums.begin(), nums.end(), isEven);

    cout << "Partitioned Array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}

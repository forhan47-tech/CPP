#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};

    // Apply a function to each element
    cout << "Elements: ";
    for_each(nums.begin(), nums.end(), [](int x) { cout << x << " "; });
    cout << "\n";

    // Check if all are even
    bool allEven = all_of(nums.begin(), nums.end(), [](int x) { return x % 2 == 0; });
    cout << "All even: " << boolalpha << allEven << "\n";

    // Check if any are greater than 9
    bool anyLarge = any_of(nums.begin(), nums.end(), [](int x) { return x > 9; });
    cout << "Any > 9: " << boolalpha << anyLarge << "\n";

    // Check if none are negative
    bool noneNegative = none_of(nums.begin(), nums.end(), [](int x) { return x < 0; });
    cout << "None negative: " << boolalpha << noneNegative << "\n";

    return 0;
}

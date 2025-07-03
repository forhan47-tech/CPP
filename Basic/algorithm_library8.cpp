#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 20, 40};

    // Example 1: Remove all occurrences of 20
    auto new_end = remove(numbers.begin(), numbers.end(), 20);
    numbers.erase(new_end, numbers.end());

    cout << "After removing 20: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Reset vector for next example
    numbers = {10, 20, 30, 20, 40};

    // Example 2: Remove elements less than 20
    new_end = remove_if(numbers.begin(), numbers.end(), [](int x) { return x < 20; });
    numbers.erase(new_end, numbers.end());

    cout << "After removing elements < 20: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    // Reset vector for next example
    numbers = {10, 10, 20, 20, 30, 30};

    // Example 3: Remove consecutive duplicates
    new_end = unique(numbers.begin(), numbers.end());
    numbers.erase(new_end, numbers.end());

    cout << "After removing consecutive duplicates: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    return 0;
}

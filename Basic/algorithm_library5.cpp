#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Using find to locate a specific value
    auto position_of_30 = find(numbers.begin(), numbers.end(), 30);
    if (position_of_30 != numbers.end())
        cout << "Element found at index: " << distance(numbers.begin(), position_of_30) << endl;
    else
        cout << "Element not found!" << endl;

    // Using find_if to find the first element greater than 25
    auto first_greater_than_25 = find_if(numbers.begin(), numbers.end(), [](int value) {
        return value > 25;
    });

    if (first_greater_than_25 != numbers.end())
        cout << "First element greater than 25 is: " << *first_greater_than_25 << endl;
    else
        cout << "No element greater than 25 found!" << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 5, 8, 1, 7, 3};

    // Make a copy for the 3rd smallest element
    vector<int> smallest = numbers;
    nth_element(smallest.begin(), smallest.begin() + 2, smallest.end());
    cout << "3rd smallest element: " << smallest[2] << endl;

    // Make a copy for the 3rd largest element
    vector<int> largest = numbers;
    nth_element(largest.begin(), largest.begin() + 2, largest.end(), greater<int>());
    cout << "3rd largest element: " << largest[2] << endl;

    return 0;
}

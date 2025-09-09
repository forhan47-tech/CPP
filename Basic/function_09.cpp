#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec) { // Pass by value
    for (int num : vec) {
        cout << num << " ";
    }
}

int main() {
    vector<int> nums = {10, 20, 30};
    printVector(nums); // Copy is passed
    return 0;
}

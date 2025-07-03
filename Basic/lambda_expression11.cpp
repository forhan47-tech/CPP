#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};

    auto modify = [&nums]() {
        for (int& n : nums)
            n *= 10;  // Directly modifies the original vector
    };

    modify();  // Now nums = {10, 20, 30}

    cout << "Modified vector: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {3, 2, 1, 4, 5};

    cout << "Numbers: ";
    for (auto num : numbers) {  // Auto deduces type
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


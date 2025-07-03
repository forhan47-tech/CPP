#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> v1 = {"Hello", "World"};
    vector<string> v2(v1.size());

    // Move elements from v1 to v2
    // After this operation, v1 will be empty and v2 will contain the elements
    move(v1.begin(), v1.end(), v2.begin());

    cout << "Moved elements: ";
    for (const auto& str : v2) cout << str << " ";

    return 0;
}


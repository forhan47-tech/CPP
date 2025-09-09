#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> v1 = {"Hello", "World"};
    vector<string> v2(v1.size()); // must be pre-sized for std::move

    // Move elements from v1 to v2
    move(v1.begin(), v1.end(), v2.begin()); 

    cout << "Moved elements: ";
    for (const auto& str : v2) cout << str << " ";

    return 0;
}


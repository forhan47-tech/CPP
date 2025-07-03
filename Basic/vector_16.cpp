#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5}, vec2 = {10, 20, 30, 40, 50};

    vec1.swap(vec2);  // Swap vectors

    cout << "\n\nAfter swapping:\nvec1: ";
    for (int num : vec1) cout << num << " ";
    
    cout << "\nvec2: ";
    for (int num : vec2) cout << num << " ";

    return 0;
}


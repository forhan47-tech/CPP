#include <iostream>
#include <vector>
#include <utility>  // For std::move
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = move(v1);  // Move v1 into v2

    cout << "v1 Size After Move: " << v1.size() << endl;  // Output: 0
    cout << "v2 Size After Move: " << v2.size() << endl;  // Output: 5
    
    return 0;
}


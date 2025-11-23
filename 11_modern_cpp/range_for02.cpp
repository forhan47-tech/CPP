#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};

    for (auto& e : vec) {  
        e += 5;
    }

    cout << "Modified values: ";
    for (auto val : vec) cout << val << " ";
    cout << endl;

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    
    vector<int> v2(5, 0); // all set to 0

    cout << "Vector 1: ";
    for (auto num : v1) {  
        cout << num << " ";
    }
    cout << endl;

    cout << "Vector 2: ";
    for (size_t i = 0; i < v2.size(); ++i) {
        cout << "v2[" << i << "] = " << v2[i] << endl;
    }
    return 0;
}


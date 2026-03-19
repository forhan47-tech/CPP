#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {10, 20};

    v1.swap(v2); // exchange contents

    cout << "v1 after swap: ";
    for (int x : v1) cout << x << " "; 

    cout << "\nv2 after swap: ";
    for (int x : v2) cout << x << " "; 
    return 0;
}

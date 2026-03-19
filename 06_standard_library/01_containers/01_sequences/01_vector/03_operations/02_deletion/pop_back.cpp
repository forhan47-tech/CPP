#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};  
    v.pop_back(); // removes 3

    cout << "Vector after pop_back: ";
    for (int x : v) {
        cout << x << " "; 
    }
    return 0;
}

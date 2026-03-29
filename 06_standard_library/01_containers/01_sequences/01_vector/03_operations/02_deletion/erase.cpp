#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    
    v.erase(v.begin() + 2); // removes element at index 2 
    v.erase(v.begin(), v.begin()+2); // remove first two elements
 

    cout << "Vector after erase: ";
    for (int x : v) cout << x << " "; 
    return 0;
}

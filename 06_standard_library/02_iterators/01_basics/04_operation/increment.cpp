#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    auto it = v.begin();  
    cout << *it << endl;  
    
    ++it; // move forward
    cout << *it << endl;  
}

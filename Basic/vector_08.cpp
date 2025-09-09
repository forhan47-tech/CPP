#include <iostream>
#include <vector>
#include <utility> 
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = move(v1);  // Move v1 into v2

    cout << "v1 Size After Move: " << v1.size() << endl;  
    cout << "v2 Size After Move: " << v2.size() << endl;  
    
    return 0;
}


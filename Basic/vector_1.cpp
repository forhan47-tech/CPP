#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5}; // Initializes a vector with 5 elements
    
    //vector<int> v1(5, 0); // Initializes a vector with 5 elements, all set to 0

    for (auto num : v1) {  // Range-based for loop to iterate through the vector
        cout << num << " ";
    }
    cout << endl;


    return 0;
}


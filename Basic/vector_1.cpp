#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5}; // Initializes a vector with 5 elements
    
    //vector<int> more_numbers(5, 10); // Initializes a vector with 5 elements, each set to 10

    for (auto num : numbers) {  // Range-based for loop to iterate through the vector
        cout << num << " ";
    }
    cout << endl;


    return 0;
}


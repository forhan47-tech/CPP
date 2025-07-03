

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // Declare a vector to store integers
    int n = 5, x;

    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers.push_back(x); // Append each element to the vector
    }

    cout << "Stored Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}

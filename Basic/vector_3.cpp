

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(5); // Preallocate space for 5 elements
    int v1;


    for (int i = 0; i < numbers.size(); i++) {
        cin >> v1;
        numbers.push_back(v1); // Append each element to the vector
    }

    cout << "Stored Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}

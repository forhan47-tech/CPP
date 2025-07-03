#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n); // Preallocate space for `n` elements

    cout << "Enter " << n << " numbers:\n";
    for (int &num : numbers) {
        cin >> num; // Directly input values into vector
    }

    cout << "Stored elements: ";
    for (const int num : numbers) {
        cout << num << " ";
    }

    return 0;
}

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr; 
    size_t i = 0; 

    cout << "Enter 5 numbers: ";
    while (i < arr.size()) {
        cin >> arr[i]; 
        i++; 
    }

    cout << "Stored Numbers: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(10); 

    cout << "Enter 10 numbers: ";
    for (int& num : v1) {
        cin >> num; 
    }

    cout << "Vector elements : ";
    for (const int num : v1) {
        cout << num << " ";
    }
    return 0;
}

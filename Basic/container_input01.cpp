#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(10); 

    cout << "Enter 10 numbers: ";
    for (size_t i = 0; i < vec.size(); i++) {
        cin >> vec[i]; 
    }

    cout << "Vector elements: ";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}

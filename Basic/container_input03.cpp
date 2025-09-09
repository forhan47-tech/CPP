#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(10);

    int num;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < vec.size(); i++) {
        cin >> num;
        vec.push_back(num); 
    }

    cout << "Stored Elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10); // Initializes a vector with size 10

    for (size_t i = 0; i < vec.size(); i++) {
        cin >> vec[i]; // Input elements into the vector
    }

    cout << "Vector Elements: ";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}

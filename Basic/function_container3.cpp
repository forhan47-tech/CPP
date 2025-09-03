#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector() {
    vector<int> v = {2, 4, 6, 8};
    return v; // Returns vector
}

int main() {
    vector<int> myVector = createVector();

    cout << "Vector elements: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    
    return 0;
}

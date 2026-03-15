#include <iostream>
#include <vector>
using namespace std;

void showVector(vector<int> v) { // copy
    v.push_back(99); // modifies only the copy
    cout << "Inside function size=" << v.size() << endl;
}

int main() {
    vector<int> vec = {1,2,3};
    showVector(vec);
    cout << "Outside function size=" << vec.size() << endl;
}

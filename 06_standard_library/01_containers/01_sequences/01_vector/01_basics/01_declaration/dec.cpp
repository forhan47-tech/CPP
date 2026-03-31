#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;   // declaration only

    vec.push_back(10);  // initialization
    vec.push_back(20);

    cout << vec[0] << endl;  // access
    cout << vec[1] << endl;
}

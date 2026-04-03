#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {7,2,5,3,9};
    nth_element(v.begin(), v.begin()+2, v.end());
    cout << "Third smallest: " << v[2] << endl; 
}

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << "Distance: " << distance(v.begin(), v.end()) << endl; 
}

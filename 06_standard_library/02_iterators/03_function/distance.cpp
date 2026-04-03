#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    cout << "Distance: " << distance(v.begin(), v.end()) << endl; 
}

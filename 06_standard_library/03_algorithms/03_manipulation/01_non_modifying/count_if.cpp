#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << count_if(v.begin(), v.end(), [](int x){ return x%2==0; }) << endl; 
}

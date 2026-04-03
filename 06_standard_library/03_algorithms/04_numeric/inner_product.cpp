#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,6};
    int dot = inner_product(a.begin(), a.end(), b.begin(), 0);
    cout << "Dot product: " << dot << endl; 
}

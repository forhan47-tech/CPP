#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    int dotProduct = inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    cout << "Dot Product: " << dotProduct << endl;  // Output: 32

    return 0;
}


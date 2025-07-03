#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    int sum = accumulate(v.begin(), v.end(), 0);  // Sum of elements
    cout << "Sum: " << sum << endl;

    cout << "GCD of 48 and 18: " << gcd(48, 18) << endl;
    cout << "LCM of 48 and 18: " << lcm(48, 18) << endl;

    return 0;
}


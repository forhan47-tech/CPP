#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Calculate sum using accumulate
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;

    // Calculate product using accumulate
    int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());
    cout << "Product: " << product << endl;

    cout << "GCD of 48 and 18: " << gcd(48, 18) << endl;
    cout << "LCM of 48 and 18: " << lcm(48, 18) << endl;

    return 0;
}


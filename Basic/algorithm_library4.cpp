#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    int count_val = count(v.begin(), v.end(), 3);  // Count occurrences of 3
    cout << "Count of 3: " << count_val << endl;

    int even_count = count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    cout << "Number of even elements: " << even_count << endl;

    int prime_count = count_if(v.begin(), v.end(), isPrime);
    cout << "Number of prime elements: " << prime_count << endl;

    return 0;
}

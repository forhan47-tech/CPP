#include <iostream>
using namespace std;

int main() {
    int count = 0;

    auto lambda = [count]() mutable {
        count++;
        cout << "Inside lambda: " << count << endl;
    };

    lambda();  // Output: Inside lambda: 1

    cout << "Outside: " << count << endl;  // Output: Outside: 0

    return 0;
}

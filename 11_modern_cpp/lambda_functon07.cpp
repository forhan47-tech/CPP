#include <iostream>
using namespace std;

int main() {
    int x = 10;

    auto lambda = [&x]() {
        cout << "Inside lambda: " << x << endl;
    };

    x = 20;
    lambda();  // Output: Inside lambda: 20

    cout << "Outside lambda: " << x << endl; 
    return 0;
}

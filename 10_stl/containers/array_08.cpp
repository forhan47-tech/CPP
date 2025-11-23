#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> a = {1, 2, 3};
    array<int, 3> b = {1, 2, 3};
    array<int, 3> c = {3, 2, 1};

    cout << boolalpha;
    cout << "a == b: " << (a == b) << endl;
    cout << "a == c: " << (a == c) << endl;
    
    return 0;
}

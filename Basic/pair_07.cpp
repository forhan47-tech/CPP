#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1 = {1, "Apple"};
    pair<int, string> p2;

    p2 = p1; // Copy assignment
    cout << p2.first << ": " << p2.second << endl;

    return 0;
}

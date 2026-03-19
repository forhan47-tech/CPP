#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);   // 5 elements, all initialized to 0

    cout << "v: ";
    for (int x : v) cout << x << " ";
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5, 100);   // 5 elements, all initialized to 100

    cout << "v: ";
    for (int x : v) cout << x << " ";
    return 0;
}

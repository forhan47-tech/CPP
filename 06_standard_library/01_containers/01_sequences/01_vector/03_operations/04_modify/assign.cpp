#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.assign(5, 100); // 5 elements, all 100

    cout << "Vector after assign: ";
    for (int x : v) cout << x << " "; 
    return 0;
}

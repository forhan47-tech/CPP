#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.resize(5);   // increases size to 5, new elements = 0

    cout << "After resize: ";
    for (int x : v) cout << x << " "; 
    return 0;
}

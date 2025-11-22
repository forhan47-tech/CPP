#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 10, 15};

    for (const int& e : vec) { // Read-only
        cout << e << endl;
    }
    return 0;
}

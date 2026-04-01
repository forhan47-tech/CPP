#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {1,2,2,3};
    ms.clear();

    cout << "Size after clear: " << ms.size() << endl; // 0
}

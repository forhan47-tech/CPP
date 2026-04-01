#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10,20,20,30,40};

    ms.erase(20); // removes all 20s
    auto it = ms.find(30);
    if(it != ms.end()) ms.erase(it); // remove one occurrence
    ms.erase(ms.begin(), ms.end()); // remove all

    cout << "Size after erase: " << ms.size() << endl; // 0
}

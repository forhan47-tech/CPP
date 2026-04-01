#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};

    auto it = ms.find(20);
    if (it != ms.end())
        cout << "Found: " << *it << endl; 
    else
        cout << "Not Found";
}

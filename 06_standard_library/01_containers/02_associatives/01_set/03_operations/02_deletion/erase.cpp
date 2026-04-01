#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10,20,30,40};

    s.erase(20); // remove by value
    auto it = s.find(30);
    if(it != s.end()) s.erase(it); // remove by iterator
    s.erase(s.begin(), s.end()); // remove all

    cout << "Size after erase: " << s.size() << endl;
}

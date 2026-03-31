#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};

    auto it = s.find(20);
    if (it != s.end())
        cout << "Found: " << *it << endl; 
    else
        cout << "Not Found";
}

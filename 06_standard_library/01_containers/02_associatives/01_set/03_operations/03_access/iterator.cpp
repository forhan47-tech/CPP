#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};

    auto it = s.begin();   // points to smallest element
    cout << "First element: " << *it << endl; 

    auto rit = s.rbegin(); // points to largest element
    cout << "Last element: " << *rit << endl; 
}

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};

    auto it = ms.begin();   // points to smallest element
    cout << "First element: " << *it << endl; 

    auto rit = ms.rbegin(); // points to largest element
    cout << "Last element: " << *rit << endl; 
}

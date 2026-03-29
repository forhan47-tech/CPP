#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    
    cout << "Forward traversal: ";
    for (auto it = d.begin(); it != d.end(); ++it)
        cout << *it << " "; 
}

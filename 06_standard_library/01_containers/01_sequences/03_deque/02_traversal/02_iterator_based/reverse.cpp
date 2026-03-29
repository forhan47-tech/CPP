#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3};
    
    cout << "Reverse traversal: ";
    for (auto rit = d.rbegin(); rit != d.rend(); ++rit)
        cout << *rit << " "; 
}

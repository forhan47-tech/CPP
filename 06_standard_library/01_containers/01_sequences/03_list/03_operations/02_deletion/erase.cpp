#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    auto it = ++l.begin(); // points to 2
    l.erase(it);  // remove single element 

    auto first = l.begin();
    auto last   = next(l.begin(), 2);
    l.erase(first, last); // removes first two elements

    for(int x : l) cout << x << " ";
}

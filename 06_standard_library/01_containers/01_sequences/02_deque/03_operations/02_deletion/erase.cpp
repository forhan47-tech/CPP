#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {5, 10, 15, 20};
    d.erase(d.begin() + 2);    // remove single element
    d.erase(d.begin(), d.begin() + 2);   // removes first two elements
    for (int x : d) cout << x << " "; 
}

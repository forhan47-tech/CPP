#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    for (int x : d) cout << x << " "; 
}

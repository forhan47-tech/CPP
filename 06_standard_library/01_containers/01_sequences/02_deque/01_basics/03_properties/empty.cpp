#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    cout << (d.empty() ? "Empty" : "Not Empty") << endl; 
    d.push_back(10);
    cout << (d.empty() ? "Empty" : "Not Empty") << endl; 
}

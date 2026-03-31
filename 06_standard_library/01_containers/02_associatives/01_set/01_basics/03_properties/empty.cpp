#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    cout << (s.empty() ? "Empty" : "Not Empty") << endl; 
    s.insert(10);
    cout << (s.empty() ? "Empty" : "Not Empty") << endl; 
}

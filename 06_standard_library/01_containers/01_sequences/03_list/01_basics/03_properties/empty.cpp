#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    cout << (l.empty() ? "Empty" : "Not Empty") << endl; 
    l.push_back(10);
    cout << (l.empty() ? "Empty" : "Not Empty") << endl; 
}

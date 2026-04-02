#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    cout << "Is empty? " << (l.empty() ? "Yes" : "No") << endl;

    l.push_back(100);
    cout << "Is empty after push? " << (l.empty() ? "Yes" : "No") << endl;
}

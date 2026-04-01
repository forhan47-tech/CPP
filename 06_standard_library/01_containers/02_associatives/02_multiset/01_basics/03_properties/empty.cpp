#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    cout << (ms.empty() ? "Empty" : "Not Empty") << endl; 

    ms.insert(10);
    cout << (ms.empty() ? "Empty" : "Not Empty") << endl; 
}

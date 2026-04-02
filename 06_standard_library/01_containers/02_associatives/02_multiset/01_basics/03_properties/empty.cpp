#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    cout << "Is empty? " << (ms.empty() ? "Yes" : "No") << endl; 

    ms.insert(100);
    cout << "Is empty after insert? " << (ms.empty() ? "Yes" : "No") << endl; 
}

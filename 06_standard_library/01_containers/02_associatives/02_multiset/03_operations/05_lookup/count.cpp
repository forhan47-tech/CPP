#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30};
    cout << "Count of 20: " << ms.count(20) << endl; 
    cout << "Count of 25: " << ms.count(25) << endl; 
}

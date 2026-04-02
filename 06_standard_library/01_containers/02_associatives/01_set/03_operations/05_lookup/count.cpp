#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};
    cout << "Count of 20: " << s.count(20) << endl; 
    cout << "Count of 25: " << s.count(25) << endl; 
}

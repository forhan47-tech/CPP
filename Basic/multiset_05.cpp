#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 40, 50};
 
    cout << "Lower Bound of 25: " << *ms.lower_bound(25) << endl;
    cout << "Upper Bound of 30: " << *ms.upper_bound(30) << endl;
    return 0;
}

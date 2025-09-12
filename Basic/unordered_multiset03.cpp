#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums = {10, 20, 30, 30, 40};

    cout << "Occurrences of 30: " << ums.count(30) << endl;
    cout << "Does 30 exist? " << (ums.find(30) != ums.end() ? "Yes" : "No") << endl;
    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 20, 30, 40};
    auto it = ms.find(30);
    cout << "Index of 30: " << distance(ms.begin(), it) << endl; 
}

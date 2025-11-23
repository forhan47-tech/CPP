#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 30, 30, 40};

    auto it = ms.find(30);  // Find element 30   
    if (it != ms.end()){
        cout << "Element found at index: " << distance(ms.begin(), it) << endl;
    }

    // Occurrence of element
    cout << "Occurrences of 30: " << ms.count(30) << endl;

    // Check if an element exists
    cout << "Does 30 exist? " << (ms.contains(30) ? "Yes" : "No") << endl;

    return 0;
}

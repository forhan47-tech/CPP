#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<int, string> p1 = {1, "Apple"};
    pair<int, string> p2 = {2, "Banana"};
    
    swap(p1, p2);  // Swap pairs

    cout << "\nAfter swap:\n";
    cout << "Pair 1: " << p1.first << " -> " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " -> " << p2.second << endl;

    return 0;
}

#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<int, string> p1 = {1, "Apple"}; // Initialize pair
    pair<int, string> p2 = make_pair(2, "Banana"); // Using make_pair()

    cout << "Pair 1: " << p1.first << " -> " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " -> " << p2.second << endl;

    return 0;
}

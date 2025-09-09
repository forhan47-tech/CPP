#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1 = {1, "Apple"}; 
    pair<int, string> p2(2, "Banana");

    cout << "Pair 1: " << p1.first << " -> " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " -> " << p2.second << endl; 
    return 0;
}

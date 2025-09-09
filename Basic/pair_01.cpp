#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1;

    p1.first = 1;  
    p1.second = "Apple";
    cout << "Pair 1: " << p1.first << " -> " << p1.second << endl;

    auto p2 = make_pair(2, "Banana"); 
    cout << "Pair 2: " << p2.first << " -> " << p2.second << endl;
    return 0;
}

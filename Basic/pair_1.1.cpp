#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<int, string> p1;

    p1.first = 1;  // Assign first element
    p1.second = "Apple";  // Assign second element

    cout << "Pair 1: " << p1.first << " -> " << p1.second << endl;

    pair<int, string> p2(2, "Banana"); // Using parameterized constructor    
    cout << "Pair 2: " << p2.first << " -> " << p2.second << endl;

    return 0;
}

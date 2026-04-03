#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1(3, "Three");
    pair<int, string> p2(4, "Four");

    p1.swap(p2); // swap contents
    cout << p1.first << " , " << p1.second << endl;
    cout << p2.first << " , " << p2.second << endl; 
}

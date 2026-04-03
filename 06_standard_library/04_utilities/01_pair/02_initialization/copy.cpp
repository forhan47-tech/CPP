#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1(2, "Two");
    pair<int, string> p2(p1); // copy constructor
    cout << p2.first << " , " << p2.second << endl; 
}

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1(3, "Three");
    pair<int, string> p2(std::move(p1)); // move constructor
    cout << p2.first << " , " << p2.second << endl; 
}

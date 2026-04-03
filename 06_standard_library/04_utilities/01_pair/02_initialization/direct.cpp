#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p(1, "One"); // parameterized constructor
    cout << p.first << " , " << p.second << endl; 
}

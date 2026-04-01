#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    cout << (m.empty() ? "Empty" : "Not Empty") << endl; 

    m[1] = "Hello";
    cout << (m.empty() ? "Empty" : "Not Empty") << endl; 
}

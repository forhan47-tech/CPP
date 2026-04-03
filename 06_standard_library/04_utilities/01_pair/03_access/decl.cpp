#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p(1, "One");
    cout << p.first << " , " << p.second << endl;
    
    p.first = 2; // modify
    p.second = "Two";
    cout << p.first << " - " << p.second << endl;
}

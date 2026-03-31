#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> d;
    d.emplace_back("Hello");
    d.emplace_back("World");
    for (auto &s : d) cout << s << " "; 
}

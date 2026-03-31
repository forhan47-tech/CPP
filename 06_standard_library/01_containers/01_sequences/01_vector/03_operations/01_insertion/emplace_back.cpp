#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    v.emplace_back("Hello");   // construct in place
    v.emplace_back("World");
    for (auto &s : v) cout << s << " ";
}

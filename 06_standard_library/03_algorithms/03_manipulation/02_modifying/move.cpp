#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> src = {"A","B","C"};
    vector<string> dest(3);
    move(src.begin(), src.end(), dest.begin());
    for(auto &s : dest) cout << s << " "; 
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    const string s = "Contiguous";
    for(auto it = s.cbegin(); it != s.cend(); ++it)
        cout << *it << " "; 
}

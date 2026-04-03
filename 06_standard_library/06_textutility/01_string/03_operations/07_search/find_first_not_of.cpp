#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "aaaabxyz";
    size_t pos = s.find_first_not_of("a");
    cout << "First non-'a' char at: " << pos << endl; 

    size_t last = s.find_last_not_of("xyz");
    cout << "Last non-x/y/z char at: " << last << endl; 
}

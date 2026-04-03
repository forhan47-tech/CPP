#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcdefgabc";
    size_t pos = s.find_first_of("cde");
    cout << "First occurrence of c/d/e: " << pos << endl;

    size_t last = s.find_last_of("abc");
    cout << "Last occurrence of a/b/c: " << last << endl; 
}

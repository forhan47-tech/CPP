#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("Computer");
    string s2(std::move(s1)); // move constructor
    cout << s2 << endl; 
    cout << "\nSize of s1 after move: " << s1.size() << endl; 
}

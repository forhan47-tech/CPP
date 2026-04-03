#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "First";
    string s2 = "Second";
    s1.swap(s2); // exchange contents
    
    cout << "s1: " << s1 << endl; 
    cout << "s2: " << s2 << endl; 
}

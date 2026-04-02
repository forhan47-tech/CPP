#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    cout << "First char: " << s[0] << endl;   
    s[1] = 'a'; // modify
    cout << "Modified string: " << s << endl; 
}

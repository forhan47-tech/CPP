#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "C++";
    cout << s.front() << endl; 
    s.front() = 'X';   // modify
    cout << s << endl;         
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Programming";
    string sub = s.substr(2, 6);   // extract substring "ogramm"
    cout << sub << endl; 
}

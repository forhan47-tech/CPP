#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Programming";
    string s2(s1.begin(), s1.begin()+6); 
    cout << s2 << endl; 
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Language";
    cout << s.back() << endl; 
    s.back() = '!';   // modify
    cout << s << endl;       
}

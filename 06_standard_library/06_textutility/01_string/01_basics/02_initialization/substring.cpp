#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "HelloWorld";
    string s2(s1, 5, 5); 
    cout << s2 << endl;
}

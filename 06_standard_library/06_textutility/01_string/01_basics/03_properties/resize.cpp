#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";  

    s.resize(10, '*'); // extend with '*'
    cout << s << endl;  
     
    s.resize(3);       // shrink
    cout << s << endl; 
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Graph";
    string t = "Jude";

    s.swap(t); // exchange contents
    
    cout << "s: " << s << endl; 
    cout << "t: " << t << endl; 
}

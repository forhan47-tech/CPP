#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "I love Java";
    s.replace(7, 4, "C++"); // replace "Java" with "C++"
    cout << s << endl; 
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "I like programming in C++";

    size_t pos = s.find("programming");
    if(pos != string::npos)
        cout << "Found at index: " << pos << endl;

    size_t rpos = s.rfind("in");
    cout << "Last occurrence of 'in': " << rpos << endl;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "World";
    cout << s.at(2) << endl; 
    try {
        cout << s.at(10);    // throws exception
    } catch(out_of_range& e) {
        cout << "Out of range!" << endl;
    }
}

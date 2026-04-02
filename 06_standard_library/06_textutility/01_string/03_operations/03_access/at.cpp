#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "World";
    cout << "Char at index 2: " << s.at(2) << endl; 

    try {
        cout << s.at(10) << endl; // throws exception
    } catch(const out_of_range& e) {
        cout << "Index out of range!" << endl;
    }
}

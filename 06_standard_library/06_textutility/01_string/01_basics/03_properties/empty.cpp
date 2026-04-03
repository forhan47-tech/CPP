#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;

    s.push_back('A');
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;
}

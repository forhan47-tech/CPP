#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{1,"Alice"},{2,"Bob"}};

    cout << m.at(2) << endl; // Bob
    try {
        cout << m.at(3) << endl; // throws exception
    } catch(const out_of_range& e) {
        cout << "Key not found!" << endl;
    }
}

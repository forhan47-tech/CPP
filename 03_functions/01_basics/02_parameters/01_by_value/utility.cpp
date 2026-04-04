#include <iostream>
#include <utility>
using namespace std;

void showPair(pair<string, int> p) { 
    cout << p.first << " → " << p.second << endl;
    p.second++; // modifies only the copy
}

int main() {
    pair<string, int> person = {"Alice", 25};
    showPair(person);
    cout << "Outside: " << person.first << " → " << person.second << endl; 
}

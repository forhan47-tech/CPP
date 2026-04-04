#include <iostream>
#include <utility>
using namespace std;

void incrementAge(pair<string, int> &p) { 
    p.second++; // modifies original
}

int main() {
    pair<string, int> person = {"Bob", 30};
    incrementAge(person);
    cout << person.first << " → " << person.second << endl; 
}

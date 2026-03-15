#include <iostream>
#include <utility>
using namespace std;

void incrementAge(pair<string, int> &p) { // reference
    p.second++;
}

int main() {
    pair<string, int> person = {"Bob", 30};
    incrementAge(person);
    cout << person.first << " → " << person.second << endl; // Bob → 31
}

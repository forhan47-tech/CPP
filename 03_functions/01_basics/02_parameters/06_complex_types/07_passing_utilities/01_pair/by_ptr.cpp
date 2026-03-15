#include <iostream>
#include <utility>
using namespace std;

void incrementAge(pair<string, int> *p) { // pointer
    p->second++;
}

int main() {
    pair<string, int> person = {"Charlie", 40};
    incrementAge(&person); // pass address
    cout << person.first << " → " << person.second << endl; // Charlie → 41
}

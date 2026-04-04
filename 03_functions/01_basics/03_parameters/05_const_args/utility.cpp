#include <iostream>
#include <utility>
using namespace std;

void printPair(const pair<string, int> &p) { 
    cout << p.first << " → " << p.second << endl; // cannot modify p
}

int main() {
    pair<string, int> person = {"Bob", 30};
    printPair(person);
}

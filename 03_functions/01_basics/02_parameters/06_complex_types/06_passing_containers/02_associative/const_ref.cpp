#include <iostream>
#include <map>
using namespace std;

void printMap(const map<string,int> &m) { // const reference
    for (auto &p : m) {
        cout << p.first << " → " << p.second << endl;
    }
}

int main() {
    map<string,int> ages = { {"Alice",25}, {"Bob",30} };
    printMap(ages); // safe, efficient
}
